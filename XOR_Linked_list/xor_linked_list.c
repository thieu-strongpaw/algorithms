#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


struct Node {
	int data;
	struct Node* both;
};

struct LList {
	struct Node* head;
	struct Node* tail;
};

struct Node* XOR(struct Node* a, struct Node* b) {
	return (struct Node*)((uintptr_t)(a) ^ (uintptr_t)(b)); // cast a and b to int's, xor, then cast back to pointer.
}

void insertAthead(struct LList* list, int data) {
	struct Node* newNode = malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->both = XOR(NULL, list->head); 

	if (list->head != NULL) {
		struct Node* next = list->head;
		struct Node* nextNext = XOR(NULL, next->both);
		next->both = XOR(newNode, nextNext);
	}else{
		list->tail = newNode;
	}
	list->head = newNode;
}

void insertAtTail(struct LList* list, int data) {
	struct Node* newNode = malloc(sizeof(struct Node));
	newNode->data = data;
	newNode->both = XOR(list->tail, NULL); 

	if (list->tail != NULL) {
		struct Node* prev = list->tail;
		struct Node* prevPrev = XOR(prev->both, NULL);
		prev->both = XOR(prevPrev, newNode);
	}else{
		list->head = newNode;
	}
	list->tail = newNode;
}


void printList(struct LList* list) {
	struct Node* current = list->head;
	struct Node* prev = NULL;
	struct Node* next;

	printf("List: ");
	while (current != NULL) {
		printf("%d ", current->data);
		next = XOR(prev, current->both);
		prev = current; 
		current = next;
	}
	printf("\n");
}

void freeList(struct LList* list) {
	struct Node* current = list->head;
	struct Node* prev = NULL;
	struct Node* next;

	while (current != NULL) {
		next = XOR(prev, current->both);
		free(current);
		prev = current;
		current = next;
	}
	list->head = list->tail = NULL;
}


int main() {


	printf("hey yo!\n");
	struct LList list = {NULL, NULL};

	printf("start head!\n");
	insertAthead(&list, 10);
	insertAthead(&list, 20);
	printf("start tail\n");
	insertAtTail(&list, 30);
	insertAtTail(&list, 40);
	printList(&list);
	printf("start print!\n");
	freeList(&list);
	
	return 0;
}

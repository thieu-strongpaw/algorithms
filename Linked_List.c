#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *next;
};

struct LList {
	struct node head;
};

struct LList Creat_LList();

void LL_insert(struct LList L, int data);

void List_Print(struct LList L);

int main(){

	struct LList test_list = Creat_LList();
	
	LL_insert(test_list, 1);

	LL_insert(test_list, 2);

	List_Print(test_list);

	return EXIT_SUCCESS;
}





struct LList Creat_LList(){
	struct node head;
	struct LList L;
	head.next = NULL;
	L.head = head;
	return L;	
};

// insertion into list
// LL stands for Linked List
void LL_insert(struct LList L, int data){
	struct node new_node;
	new_node.key = data;
	new_node.next = L.head.next;
	L.head.next = &new_node;
}

void List_Print(struct LList L){

	struct node *x = L.head.next;
	while(x->next != NULL){
	x = x->next;
	printf("Data in node: %d\n", x->key);
	}
	
}

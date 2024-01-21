#include <stdio.h>
#include <stdlib.h>

struct node {
	int key;
	struct node *next;
};

struct LList {
	struct node *head;
};

struct LList Creat_LList();

void LL_insert(struct LList *L, int data);

void List_Print(struct LList L);

void Free_List(struct LList *L);

int main(){

	struct LList test_list = Creat_LList();
	
	LL_insert(&test_list, 1);

	LL_insert(&test_list, 2);

	List_Print(test_list);

	Free_List(&test_list);

	return EXIT_SUCCESS;
}





struct LList Creat_LList(){
	struct LList L;
	L.head = NULL;
	return L;	
};

// insertion into list
// LL stands for Linked List
void LL_insert(struct LList *L, int data){
	struct node *new_node = malloc(sizeof(struct node));
	if(new_node == NULL){
		fprintf(stderr, "ERROR! Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}
	new_node->key = data;
	new_node->next = L->head;
	L->head = new_node;
}

void List_Print(struct LList L){

	struct node *x = L.head;
	while(x != NULL){
	printf("Data in node: %d\n", x->key);
	x = x->next;
	}
	
}

void Free_List(struct LList *L){
	struct node *x = L->head;
	while(x != NULL){
		struct node *temp = x;
		x = x->next;
		free(temp);
	}
	L->head = NULL;
}

#include "Linked_List.h"

#include <stdio.h>
#include <stdlib.h>


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

struct node *Search_List(struct LList *L, int key){
	struct node *scaned_node;
	scaned_node = L->head;
	while(scaned_node != NULL && scaned_node->key != key){
		scaned_node = scaned_node->next;
	}
	return scaned_node;
}


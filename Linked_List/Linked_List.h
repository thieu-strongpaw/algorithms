#ifndef LINKED_LIST_H
#define LINKED_LIST_H	


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

struct node *Search_List(struct LList *L, int key);

#endif

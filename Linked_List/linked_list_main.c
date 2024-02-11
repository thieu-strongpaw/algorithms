#include "Linked_List.c"
#include "Linked_List.h"

#include <stdlib.h>

int main(){

	struct LList test_list = Creat_LList();
	
	LL_insert(&test_list, 1);

	LL_insert(&test_list, 2);

	List_Print(test_list);

	struct node *search_test;
	
	int search_test_key = 2;

	search_test = Search_List(&test_list, search_test_key);

	printf("search_test %d\n", search_test->key);

	Free_List(&test_list);

	return EXIT_SUCCESS;
}

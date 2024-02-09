#include "Linked_List.c"

#include <stdlib.h>

int main(){

	struct LList test_list = Creat_LList();
	
	LL_insert(&test_list, 1);

	LL_insert(&test_list, 2);

	List_Print(test_list);

	Free_List(&test_list);

	return EXIT_SUCCESS;
}

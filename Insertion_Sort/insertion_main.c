#include <stdio.h>

#include "Insertion_Sort.c"

#define array_size 10

int main(){
	int int_array[array_size] = {3,4,67,44,2,7,4,54,23,1};

	insertion_sort(int_array, array_size);

	for(size_t i = 0; i < array_size; ++i){
		printf("%ld element is %d\n", i, int_array[i]);
	}
}

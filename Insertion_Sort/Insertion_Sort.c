#include <stdio.h>
#include "Insertion_Sort.h"


void insertion_sort(int *array, int arr_size){
	size_t i, j, key;
	for(j = 1; j < arr_size; ++j){
		key = array[j];
		i = j - 1;
		while(i >= 0 && array[i] > key){
			array[i + 1] = array[i];
			i = i - 1;
		array[i+ 1] = key;
		}
	}
}

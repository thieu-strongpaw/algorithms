#include <stdio.h>
#define array_size 10

void insertion_sort(int *array);

int main(){
	int int_array[array_size] = {3,4,67,44,2,7,4,54,23,1};

	insertion_sort(int_array);

	for(size_t i = 0; i < array_size; ++i){
		printf("%d element is %d\n", i, int_array[i]);
	}
}

void insertion_sort(int *array){
	size_t i, j, key;
	for(j = 1; j < array_size; ++j){
		key = array[j];
		i = j - 1;
		while(i >= 0 && array[i] > key){
			array[i + 1] = array[i];
			i = i - 1;
		array[i+ 1] = key;
		}
	}
}

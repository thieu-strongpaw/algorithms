#include <stdio.h>
#include <stdlib.h>

#include "Queue.c"
#include "Queue.h"


int main(){

	struct Queue *queue = create_queue(17); 
	
	enqueue(queue, 1);
	enqueue(queue, 2);
	enqueue(queue, 3);
	
	
	int return_value = dequeue(queue);
	printf("Dequeue value = %d\n", return_value);

	print_q(queue);

	free_queue(queue);

	return EXIT_SUCCESS;
}

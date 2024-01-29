#include <stdio.h>
#include <stdlib.h>

#include "Queue.c"
#include "Queue.h"


int main(){

	struct Queue *queue = create_queue(5); 
	
	enqueue(queue, 1);
	enqueue(queue, 2);
	enqueue(queue, 3);
	enqueue(queue, 4);
	int return_value = dequeue(queue);
	enqueue(queue, 5);
	enqueue(queue, 6);
	
	
	printf("Dequeue value = %d\n", return_value);

	print_q(queue);

	free_queue(queue);

	return EXIT_SUCCESS;
}

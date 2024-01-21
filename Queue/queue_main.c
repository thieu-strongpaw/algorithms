#include <stdio.h>
#include <stdlib.h>

#include "Queue.c"


int main(){

	struct Queue queue = {};
	print_q(&queue);
	
	enqueue(&queue, 1);
	enqueue(&queue, 2);
	enqueue(&queue, 3);
	enqueue(&queue, 4);
	enqueue(&queue, 5);
	enqueue(&queue, 6);
	enqueue(&queue, 7);
	enqueue(&queue, 8);
	enqueue(&queue, 9);
	enqueue(&queue, 10);
	enqueue(&queue, 11);
	enqueue(&queue, 12);
	enqueue(&queue, 13);
	enqueue(&queue, 14);
	enqueue(&queue, 15);
	
	
	print_q(&queue);
	
	printf("\n %d is the head\n", queue.head);
	int return_value = dequeue(&queue);
	printf("Dequeue value = %d\n", return_value);
	printf("\n %d is the head\n", queue.head);
	print_q(&queue);

	return EXIT_SUCCESS;
}

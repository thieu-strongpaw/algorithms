#include <stdio.h>
#include <stdlib.h>

#include "Queue.c"
#include "Queue.h"


int main(){

	struct Queue *queue = create_queue(5); 
	printf("start enqueue\n");
	enqueue(queue, 1);
	enqueue(queue, 2);
	enqueue(queue, 3);
	int num1, num2;
	num1 = dequeue(queue);
	num2 = dequeue(queue);
	printf("Number one : %d\nNumber two : %d\n", num1, num2);
	enqueue(queue, 4);
	enqueue(queue, 5);
	enqueue(queue, 6);
	enqueue(queue, 7);
	printf("end enqueue");	
	
	//printf("Dequeue value = %d\n", return_value);

	print_q(queue);

	free_queue(queue);

	return EXIT_SUCCESS;
}

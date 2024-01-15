#include <stdio.h>
#include <stdlib.h>

struct Queue {
	int queue[15];
	int head;
	int tail;
};

void print_q(struct Queue *q);

void enqueue(struct Queue *q, int x);

int dequeue(struct Queue *q);

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

void print_q(struct Queue *q){
	printf("Queue:\n");
	for(int i = 0; i < 15; i++){
		printf("%d:  %d\n", i+1, q->queue[i]);
	}
};

void enqueue(struct Queue *q, int x){
	q->queue[q->tail] = x;
	if(q->tail == 14){
		q->tail = 0;
	}else{
		q->tail = q->tail + 1;
	}
};


int dequeue(struct Queue *q){
	int x = q->queue[q->head];
	if(q->head == 14){
		q->head = 0;
	}else{
		q->head = q->head + 1;
	}
	return x;
};

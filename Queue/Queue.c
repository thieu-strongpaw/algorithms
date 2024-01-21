#include <stdio.h>
#include "Queue.h"


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

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"


struct Queue* create_queue(int len){
	struct Queue *new_queue = malloc(sizeof(struct Queue));
	if( new_queue == NULL){
		fprintf(stderr, "ERROR: Memory allocation failed\n");
		exit(EXIT_FAILURE);
	}

	new_queue->queue = malloc(len * sizeof(int));
	if(new_queue->queue == NULL){
		fprintf(stderr, "ERROR: Memory allocation failed\n");
		free(new_queue);
		exit(EXIT_FAILURE);
	}

	new_queue->queue_len = len;
	new_queue->head = 0;
	new_queue->tail = 0;
	new_queue->overflow_flag = 0;
	return new_queue;
}

void print_q(struct Queue *q){
	printf("Queue:\n");
	for(int i = 0; i < q->queue_len; i++){
		printf("%d:  %d\n", i+1, q->queue[i]);
	}
};


void enqueue(struct Queue *q, int x){
	if(q->overflow_flag != 0){
		fprintf(stderr, "ERROR: Queue Overflow\n");
		exit(EXIT_FAILURE);
	}
	q->queue[q->tail] = x;
	if(q->tail == q->queue_len){
		q->tail = 0;
	}else{
		q->tail = q->tail + 1;
	}
	if(q->tail == q->head){
		q->overflow_flag = 1;
	}
};


int dequeue(struct Queue *q){
	int x = q->queue[q->head];
	if(q->head == q->queue_len){
		q->head = 0;
	}else{
		q->head = q->head + 1;
	}
	if(q->head == (q->tail + 1)){
		q->overflow_flag = 0;
	}
	return x;
};


void free_queue(struct Queue *q){
	if(q != NULL){
		if(q->queue != NULL){
			free(q->queue);
		}
		free(q);
	}
}

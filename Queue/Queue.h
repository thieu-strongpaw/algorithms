#ifndef QUEUE_H
#define QUEUE_H


struct Queue {
	int *queue;
	int head;
	int tail;
	int queue_len;
};

struct Queue* create_queue(int len);

void print_q(struct Queue *q);


void enqueue(struct Queue *q, int x);


int dequeue(struct Queue *q);

void free_queue(struct Queue *q);

#endif //Queue.h 

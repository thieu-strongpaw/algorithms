#ifndef QUEUE_H
#define QUEUE_H


struct Queue {
	int queue[15];
	int head;
	int tail;
};


void print_q(struct Queue *q);


void enqueue(struct Queue *q, int x);


int dequeue(struct Queue *q);


#endif //Queue.h 

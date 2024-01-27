#ifndef STACK_H 
#define STACK_H

struct Stack {
	int top;
	int stack[15];
};

int stack_empty(struct Stack *s);

void push(struct Stack *s, int x);

int pop(struct Stack *s);

#endif

#include <stdio.h>
#include "Stack.h"



int stack_empty(struct Stack *s){
	if (s->top == 0){
		return 1;
	}else{
		return 0;
	}
}

void push(struct Stack *s, int x){
	s->top = s->top + 1;
	s->stack[s->top] = x;
}

int pop(struct Stack *s){
	if(stack_empty(s)){
		printf("ERROR: underflow\n");
	}else{
		s->top = s->top - 1;
		return s->stack[s->top + 1];
	}
}

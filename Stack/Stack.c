#include <stdio.h>


struct Stack {
	int top;
	int stack[15];
};

int stack_empty(struct Stack *s);

void push(struct Stack *s, int x);

int pop(struct Stack *s);


int main(){
	struct Stack stack = {0, 0};

	printf("Lets have some fun with a stack data structure\n");
		
	int is_empty = -1;
	is_empty = stack_empty(&stack);
	printf("Is the stack empty:\n");
	printf("True = 1\nFalse = 0\n");
	printf("	: %d\n", is_empty);

	printf("Now lets add three numbers: 1, 3, and 5\n");

	push(&stack, 1);
	push(&stack, 3);
	push(&stack, 5);

	is_empty = stack_empty(&stack);
	printf("Is the stack empty:\n");
	printf("True = 1\nFalse = 0\n");
	printf("	: %d\n", is_empty);
	
	printf("top is %d\n", stack.top);

	printf("Now lets pop off the top value\n");

	int pop_value = pop(&stack);
	printf("The value popped is: %d\n", pop_value);

	return 0;
}

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

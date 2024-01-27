#include <stdio.h>
#include "Stack.c"

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


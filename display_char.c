#include "monty.h"
void display_char(stack_t **stack, unsigned int l)
{
	int asc;
	if (!(stack && *stack))
	{
		fprintf(stderr, "Error: Cannot print char, stack is empty at line %u\n", l);
		exit(EXIT_FAILURE);
	}

	asc = (*stack)->n;
	if (asc < 0 || asc > 127)
	{
		fprintf(stderr, "Error: Cannot print char, value is out of ASCII range at line %u\n", l);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", asc);
}

#include "monty.h"

void top_element(stack_t **stack, unsigned int l)
{
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "Error: Cannot print top, stack is empty at line %u\n", l);
		exit(EXIT_FAILURE);
	}

	printf("%d\n", (*stack)->n);
}

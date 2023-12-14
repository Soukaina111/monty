#include "monty.h"
void append_elmts(stack_t **stack, unsigned int line_number)
{
	int total;
	if (!(stack && *stack && (*stack)->next))
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	total = (*stack)->n + (*stack)->prev->n;
	(*stack)->n = total;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

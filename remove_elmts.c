#include "monty.h"
void remove_elmts(stack_t **stack, unsigned int l)
{
	int s;
	if (!(stack && *stack && (*stack)->next))
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", l);
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	s = (*stack)->n - (*stack)->prev->n;
	(*stack)->n = s;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}

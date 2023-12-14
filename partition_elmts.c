#include "monty.h"
void partition_elmts(stack_t **stack, unsigned int l)
{
	int s1;
	if (!(stack && *stack && (*stack)->next))
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", l);
		exit(EXIT_FAILURE);
	}

	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", l);
		exit(EXIT_FAILURE);
	}

	(*stack) = (*stack)->next;
	s1 = (*stack)->n / (*stack)->prev->n;
	(*stack)->n = s1;
	free((*stack)->prev);
	(*stack)->prev = NULL;
}


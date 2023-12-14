#include "monty.h"

void from_stack(stack_t **stack, unsigned int l)
{
	stack_t *aux;
	if (stack == NULL || *stack == NULL)
	{
		fprintf(stderr, "Error: Can't pop an empty stack at line %u\n", l);
		exit(EXIT_FAILURE);
	}

	aux = *stack;
	*stack = aux->next;
	if (*stack != NULL)
		(*stack)->prev = NULL;
	free(aux);
}

#include "monty.h"
void exchange_elmts(stack_t **stack, unsigned int l)
{
	stack_t *aux;
	if (!(stack && *stack && (*stack)->next))
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", l);
		exit(EXIT_FAILURE);
	}

	aux = (*stack)->next;
	(*stack)->next = aux->next;
	if (aux->next != NULL)
		aux->next->prev = *stack;
	aux->next = *stack;
	(*stack)->prev = aux;
	aux->prev = NULL;
	*stack = aux;
}

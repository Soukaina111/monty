#include "monty.h"

void rotate_right(stack_t **stack, __attribute__((unused)) unsigned int i)
{
	stack_t *aux;
	if (!(stack && *stack && (*stack)->next))
		return;

	for (aux = *stack; aux->next != NULL; aux = aux->next);

	aux->next = *stack;
	aux->prev->next = NULL;
	aux->prev = NULL;
	(*stack)->prev = aux;
	(*stack) = aux;
}

#include "monty.h"

void rotate_left(stack_t **stack, __attribute__((unused)) unsigned int i)
{
	stack_t *aux;
	if (!(stack && *stack && (*stack)->next))
		return;

	for (aux = *stack; aux->next != NULL; aux = aux->next);

	aux->next = *stack;
	(*stack)->prev = aux;
	*stack = (*stack)->next;
	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}

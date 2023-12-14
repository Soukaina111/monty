#include "monty.h"
void enq_stack(stack_t **generated, __attribute__((unused)) unsigned int ln)
{
	stack_t *aux;

	if (!generated || !(*generated))
		exit(EXIT_FAILURE);

	if (!head)
	{
		head = *generated;
		return;
	}

	for (aux = head; aux->next; aux = aux->next);

	aux->next = *generated;
	(*generated)->prev = aux;
}


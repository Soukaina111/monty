#include "monty.h"

void  prt_st_contents(stack_t **stack, unsigned int l)
{
	stack_t *aux;

	(void) l;
	if (stack == NULL)
		exit(EXIT_FAILURE);

	for (aux = *stack; aux != NULL; aux = aux->next)
	{
		printf("%d\n", aux->n);
	}
}

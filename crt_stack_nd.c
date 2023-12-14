#include "monty.h"

stack_t *crt_stack_nd(int n)
{
	stack_t *nd = malloc(sizeof(stack_t));
	if (nd == NULL)
	{
		perror("Error: Failed to allocate memory for node");
		exit(EXIT_FAILURE);
	}

	nd->next = NULL;
	nd->prev = NULL;
	nd->n = n;
	return (nd);
}

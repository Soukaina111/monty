#include "monty.h"

void push_stack(stack_t **generated, __attribute__((unused))unsigned int i)
{
	if (!(generated && *generated))
		exit(EXIT_FAILURE);

	if (head == NULL)
	{
		head = *generated;
		head->next = NULL;
		head->prev = NULL;
	}
	else
	{
		(*generated)->next = head;
		(*generated)->prev = NULL;
		head->prev = *generated;
		head = *generated;
	}
}

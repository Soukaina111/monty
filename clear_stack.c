#include "monty.h"
void clear_stack(void)
{
	stack_t *new;

	if (head == NULL)
		return;

	for (new = head; new != NULL; new = head)
	{
		head = head->next;
		free(new);
	}
}

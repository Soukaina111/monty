#include "monty.h"


void display_str(stack_t **stack, _attribute_((unused)) unsigned int i)
{
	stack_t *cpy;
	if (!(stack && *stack))
	{
		printf("\n");
		return;
	}
	for (cpy = *stack; cpy != NULL; cpy = cpy->next)
	{
		int c = cpy->n;
		if (c <= 0 || c > 127)
			break;
		printf("%c", c);
	}
	printf("\n");
}

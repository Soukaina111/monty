#include "monty.h"

void handle_error(int num_mistake, ...)
{
	va_list argm;
	char *oper;
	int i;

	va_start(argm, num_mistake);
	if (num_mistake == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
	}
	else if (num_mistake == 2)
	{
		fprintf(stderr, "Error: Can't oipen file %s\n", va_arg(argm, char *));
	}
	else if (num_mistake == 3)
	{
		i = va_arg(argm, int);
		oper = va_arg(argm, char *);
		fprintf(stderr, "L%d: unknown instruction %s\n", i, oper);
	}
	else if (num_mistake == 4)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	else if (num_mistake == 5)
	{
		fprintf(stderr, "L%d: usage: push integer\n", va_arg(argm, int));
	}

	va_end(argm);

	clear_stack();
	exit(EXIT_FAILURE);
}

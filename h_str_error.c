#include "monty.h"

void h_str_error(int num_mistake, ...)
{
	va_list argm;
	int i;

	va_start(argm, num_mistake);
	i = va_arg(argm, int);
	if (num_mistake == 10)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", i);
	}
	else if (num_mistake == 11)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", i);
	}

	va_end(argm);

	clear_stack();
	exit(EXIT_FAILURE);
}

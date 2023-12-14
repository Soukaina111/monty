#include "monty.h"

void process_input(FILE *f)
{
	int i = 1, pattern = 0;
	char *buf = NULL;
	size_t size = 0;

	while (getline(&buf, &size, f) != -1)
	{
		pattern = process_inst(buf, i, pattern);
		i++;
	}

	free(buf);
}

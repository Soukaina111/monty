#include "monty.h"

void load_file(char *nf)
{
	FILE *fd = fopen(nf, "r");

	if (!(nf != NULL && fd != NULL))
	{
		fprintf(stderr, "Error: Can't open file %s\n", nf);
		exit(EXIT_FAILURE);
	}

	process_input(fd);
	fclose(fd);
}

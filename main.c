#include "monty.h"

int main(int ac, char *av[])
{
	do
	{
		if (ac != 2)
		{
			fprintf(stderr, "USAGE: monty file\n");
			exit(EXIT_FAILURE);
		}
	} while (0);

	load_file(av[1]);
	clear_stack();
	return 0;
}

#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry point
 * @argc: arguments count
 * @argv: list of arguments
 * Return: always 0
 */

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


void clear_stack(void)
{
	stack_t *ne;

	if (head == NULL)
		return;

	for (ne = head; ne != NULL; ne = head)
	{
		head = head->next;
		free(ne);
	}
}

void enq_stack(stack_t **generated, __attribute__((unused)) unsigned int ln)
{
	stack_t *aux;

	if (!generated || !(*generated))
		exit(EXIT_FAILURE);

	if (!head)
	{
		head = *generated;
		return;
	}

	for (aux = head; aux->next; aux = aux->next);

	aux->next = *generated;
	(*generated)->prev = aux;
}

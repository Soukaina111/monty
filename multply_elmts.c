#include "monty.h"
void multply_elmts(stack_t **stack, unsigned int i)
{
    int product;
    stack_t *current;
    if (!(stack && *stack && (*stack)->next))
    {
        fprintf(stderr, "Error: Can't multiply, stack too short at line %u\n", i);
        exit(EXIT_FAILURE);
    }

    current = *stack;
    current = current->next;
    product = current->n * current->prev->n;
    current->n = product;

    free(current->prev);
    current->prev = NULL;
}

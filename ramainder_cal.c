#include "monty.h"

void ramainder_cal(stack_t **stack, unsigned int i)
{
    int modulo;
    stack_t *current;

    if (!(stack && *stack && (*stack)->next))
    {
        fprintf(stderr, "Error: Can't modulo, stack too short at line %u\n", i);
        exit(EXIT_FAILURE);
    }

    if ((*stack)->n == 0)
    {
        fprintf(stderr, "Error: Division by zero at line %u\n", i);
        exit(EXIT_FAILURE);
    }

    current = *stack;
    current = current->next;
    modulo = current->n % current->prev->n;
    current->n = modulo;

    free(current->prev);
    current->prev = NULL;
}

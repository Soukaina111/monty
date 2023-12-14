#ifndef MONTY_H
#define MONTY_H

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdarg.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

extern stack_t *head;
typedef void (*op_func)(stack_t **, unsigned int);
void load_file(char *file_name);
int process_inst(char *buffer, int line_number, int format);
void process_input(FILE *);
void search_fun(char *, char *, int, int);

stack_t *crt_stack_nd(int n);
void clear_stack(void);
void  prt_st_contents(stack_t **, unsigned int);
void push_stack(stack_t **, unsigned int);
void enq_stack(stack_t **, unsigned int);

void execute_fnct(op_func, char *, char *, int, int);

void top_element(stack_t **, unsigned int);
void from_stack(stack_t **, unsigned int);
void no_operation(stack_t **, unsigned int);
void exchange_elmts(stack_t **, unsigned int);


void append_elmts(stack_t **, unsigned int);
void remove_elmts(stack_t **, unsigned int);
void partition_elmts(stack_t **, unsigned int);
void multply_elmts(stack_t **, unsigned int);
void ramainder_cal(stack_t **, unsigned int);
void display_char(stack_t **, unsigned int);
void display_str(stack_t **, unsigned int);
void rotate_left(stack_t **, unsigned int);
void handle_error(int num_mistake, ...);
void h_str_error(int num_mistake, ...);
void rotate_right(stack_t **, unsigned int);
#endif

#ifndef header_h
#define header_h
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
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
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */

typedef struct instruction_s

{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

int ERR;

int print_dlistint(const stack_t *h);
stack_t *add_dnodeint(stack_t **head, int n);
void f_push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number);
void push_pall(stack_t **top, unsigned int line_num);
void free_z(stack_t *st);
int ERR_f_open(char *file_n);
int ERR_arg(void);
int ERR_push(unsigned int line_number);
int ERR_invalid(unsigned int line_number, char *opcode);

#endif

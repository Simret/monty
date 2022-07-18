#include "monty.h"

/**
 *pall - prints all the values on the stack, starting from the top of the stack.
 *@stack: struct
 *@line_number: line number
 *Return : 0
 */

void pall(stack_t **stack, unsigned int __attribute__((unused)) line_number)

{
	stack_t *x;

	x = *stack;
	if (*stack == NULL)
		return;
	fprintf(stdout,"%d\n", x->n);
	while (x->next)
	{
		x = x->next;
		fprintf(stdout,"%d\n", x->n);
	}
}

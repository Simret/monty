#include "monty.h"

/**
 * f_push - f_push
 * @stack: stack
 * @line_number: line number
 * Return: void
 */

void f_push(stack_t **stack, unsigned int line_number)

{
	int i;

	if (TB[1] == NULL)
	{
		ERR_push(line_number);
		return;
	}
	if (strlen(TB[1]) == 1 && TB[1][0] == '-')
	{
		ERR_push(line_number);
		return;
	}
	for (i = 0; TB[1][i]; i++)
	{
		if (TB[1][i] == '-' && i == 0)
			continue;
		if (TB[1][i] > '9' || TB[1][i] < '0')
		{
			ERR_push(line_number);
			return;
		}
	}
	add_dnodeint(stack, atoi(TB[1]));
}

/**
 * f_pall - f_pall
 * @stack: stack
 * @line_number: line number
 * Return: void
 */

void f_pall(stack_t **stack, unsigned int line_number)

{
	stack_t *ptr;

	(void)line_number;
	if (*stack != NULL)
	{
		ptr = *stack;
		print_dlistint(ptr);
	}
}

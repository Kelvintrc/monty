#include "monty.h"

/**
 * m_sub - subtracts top element of stack from next element and pushes result
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 *
 * Return: void
 */
void m_sub(stack_t **stack, unsigned int line_number)
{
	int n;

	if (var.stack_len < 2)
	{
		dprintf(2,
				"L%u: can't sub, stack too short\n",
				line_number);
		exit(EXIT_FAILURE);
	}
	n = (*stack)->n;
	m_pop(stack, line_number);
	(*stack)->n -= n;
}

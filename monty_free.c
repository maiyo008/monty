#include "monty.h"

/**
 * free_stack - a function that frees the memory allocated for a stack.
 * @stack: pointert to the doubly linked list representation of the stack.
 * Return: Nothing
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

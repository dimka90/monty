#include "monty.h"
/**
 * push - Pushes an item onto a stack.
 *
 * This function pushes an item onto a stack data structure. It creates a new
 * node containing the given item and adds it to the top of the stack. The
 * stack's pointer is updated to point to the newly added node.
 *
 * @stack: Double pointer to the stack onto which the item will be pushed.
 * @line_number: The line number associated with the push operation.
 * Return: None.
 */
void push(stack_t **stack, unsigned int line_number)
{
if (globe->token_num <= 1 || !(is_number(globe->tokens[1])))
{
free_arguments();
dprintf(globe->standard_err, "L%d: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
*stack = malloc(sizeof(stack_t));

if (*stack == NULL)
{
memory_allocation_failed();
}
(*stack)->next = (*stack)->prev = NULL;
(*stack)->n = (int) atoi(globe->tokens[1]);

if (globe->head != NULL)
{
(*stack)->next = globe->head;
globe->head->prev = *stack;
}
globe->head = *stack;
globe->stack_length += 1;
}
/**
 * pall - Prints all the elements of a stack
 * @stack: Pointer to a pointer to the top of the stack
 * @line_number: Line number where the pall function is called
 *
 * This function prints all the elements currently stored in the stack.
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *stack = globe->head;
if (*stack == NULL)
{
return;
}
while (*stack != NULL)
{
printf("%d\n", (*stack)->n);
*stack = (*stack)->next;
}
}
/**
 * pint - Print the  last item onto a stack.
 *
 * This function print the last item on a stack data structure.
 *
 * @stack: Double pointer to the stack onto which the item will be print.
 * @line_number: The line number associated with the push operation.
 * Return: None.
 */
void pint(stack_t **stack, unsigned int line_number)
{

*stack = globe->head;

if (*stack == NULL)
{
dprintf(globe->standard_err, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}
printf("%d\n", (*stack)->n);
}

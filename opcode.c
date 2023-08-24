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
stack_t *tempt = globe->head;
if (tempt == NULL)
{
return;
}
(void)line_number;
(void)stack;
while (tempt != NULL)
{
printf("%d\n", tempt->n);
tempt = tempt->next;
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

stack_t *tempt = globe->head;

if (tempt == NULL)
{
dprintf(globe->standard_err, "L%d: can't pint, stack empty\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
(void)stack;
printf("%d\n", tempt->n);
}
/**
* pop - Delete a node from a stack
* @stack: head pointer to stack
* @line_number: line count
* Return: void
*/
void pop(stack_t **stack, unsigned int line_number)
{
(void) stack;

if (globe->head == NULL)
{
dprintf(globe->standard_err, "L%d: can't pop an empty stack\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
delete_stack_node();
globe->stack_length -= 1;
}
/**
* swap - swap the values of two node
* @stack: head pointer
* @line_number: keeps count of line number
* Return: none
*/
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt1;

(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't swap, stack too short\n",
	line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt = globe->head;
tempt1 = tempt->next;
tempt->next = tempt1->next;

if (tempt->next)
{
tempt->next->prev = tempt;
}
tempt1->next = tempt;
tempt->prev = tempt1;
tempt1->prev = NULL;
globe->head = tempt1;
}


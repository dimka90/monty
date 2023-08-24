#include "monty.h"
/**
* nop - doesn’t do anything
* @stack: head pointer
* @line_number: keeps count of line count
*/
void nop(stack_t **stack, unsigned int line_number)
{
(void) stack;
(void) line_number;
return;
}
/**
* add - add the value of the top stack and store
* @stack: head pointer
* @line_number: line count
* This program add the value store the top linked list with
* the one precedding it,the result is stored in the second
* top element of the stack, and the top element is removed, so
*  that at the end
*/
void add(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt2;
(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't add, stack too short\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt = globe->head;
tempt2 = tempt->next;
tempt2->n = tempt->n + tempt2->n;
delete_stack_node();
globe->stack_length -= 1;
}
/**
* sub - subtract the value of the top stack and store
* @stack: head pointer
* @line_number: line count
* This program add the value store the top linked list with
* the one precedding it,the result is stored in the second
* top element of the stack, and the top element is removed, so
*  that at the end
*/
void sub(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt2;
(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't sub, stack too short\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt = globe->head;
tempt2 = tempt->next;
tempt2->n = tempt2->n - tempt->n;
delete_stack_node();
globe->stack_length -= 1;
}
/**
* mul - multiply the value of the top stack and store
* @stack: head pointer
* @line_number: line count
* This program add the value store the top linked list with
* the one precedding it,the result is stored in the second
* top element of the stack, and the top element is removed, so
*  that at the end
*/
void mul(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt2;
(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't mul, stack too short\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt = globe->head;
tempt2 = tempt->next;
tempt2->n = tempt2->n * tempt->n;
delete_stack_node();
globe->stack_length -= 1;
}
/**
* div - div the value of the top stack and store
* @stack: head pointer
* @line_number: line count
* This program add the value store the top linked list with
* the one precedding it,the result is stored in the second
* top element of the stack, and the top element is removed, so
*  that at the end
*/
void div(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt2;
(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't div, stack too short\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt = globe->head;
tempt2 = tempt->next;
if (tempt->n == 0)
{
dprintf(globe->standard_err, "L%d: divsion by zero\n", line_number);
free_all_args();
exit(EXIT_FAILURE);
}
tempt2->n = tempt2->n / tempt->n;
delete_stack_node();
globe->stack_length -= 1;
}

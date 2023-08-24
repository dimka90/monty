#include "monty.h"
/**
* mod - mod the value of the top stack and store
* @stack: head pointer
* @line_number: line count
* This program add the value store the top linked list with
* the one precedding it,the result is stored in the second
* top element of the stack, and the top element is removed, so
*  that at the end
*/
void mod(stack_t **stack, unsigned int line_number)
{
stack_t *tempt, *tempt2;
(void) stack;
if (globe->stack_length < 2)
{
dprintf(globe->standard_err, "L%d: can't mod, stack too short\n", line_number);
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
tempt2->n = tempt2->n % tempt->n;
delete_stack_node();
globe->stack_length -= 1;
}

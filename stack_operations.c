#include "monty.h"
/**
* delete_stack_node - Delete a node from stack
*/
void delete_stack_node(void)
{
stack_t *tempt = globe->head;
globe->head = tempt->next;
free(tempt);
}

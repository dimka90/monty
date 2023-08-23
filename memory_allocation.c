#include "monty.h"
/**
 * memory_allocation_failed - Handles memory allocation failure.
 *
 * This function is called when a memory allocation request fails, and it
 * performs necessary actions to handle the failure gracefully.
 *
 * Return: None.
 */
void memory_allocation_failed(void)
{
dprintf(globe->standard_err, "Error: malloc failed\n");
exit(EXIT_FAILURE);
}
/**
 * free_token - Frees memory occupied by tokens.
 *
 * This function releases memory occupied by tokens that were allocated
 * during tokenization.
 *
 * Return: None.
 */
void free_token(void)
{
int count = 0;
/* checking for empty tokens */
if (globe->tokens == NULL)
{
return;
}
/* free each pointer */
while (globe->tokens[count] != NULL)
{

free(globe->tokens[count]);
count++;
}
free(globe->tokens);
globe->tokens = NULL;

}
/**
 * free_arguments - Frees memory allocated for arguments.
 *
 * This function frees the memory that was previously allocated
 * for storing command line arguments.
 */
void free_arguments(void)
{

if (globe == NULL)
{
return;
}
if (globe->instruction)
{
free(globe->instruction);
globe->instruction = NULL;
}
free_head();

if (globe->line)
{
free(globe->line);
globe->line = NULL;
}

free(globe);
}
/**
 * free_head - Frees memory allocated for stack head.
 *
 * This function frees the memory that was previously allocated
 * for storing a pointer to the stack head
 */
void free_head(void)
{
if (globe->head)
{
free_stack(globe->head);
globe->head = NULL;
}
}
/**
 * free_stack- Frees memory allocated for element on the stack.
 * @head: pointer to the last element inserted
 * This function frees the memory that was previously allocated
 * for the doubly link list.
 * @head - pointer to the last element inserted
*/
void  free_stack(stack_t *head)
{
if (head == NULL)
{
return;
}
if (head->next != NULL)
{
free_stack(head->next);
}
free(head);
}


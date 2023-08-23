#include "monty.h"
/**
 * initialise_args - Initializes program arguments.
 *
 * This function initializes data structures or variables needed to manage
 * the program's arguments.
 *
 * Return: None.
 */
void initialise_args(void)
{
/* accessing global vairable */

globe = malloc(sizeof(global_v));
if (globe == NULL)
{
memory_allocation_failed();
}
globe->instruction = malloc(sizeof(instruction_t));
if (globe->instruction == NULL)

{
memory_allocation_failed();
}
globe->file = NULL;
globe->line = NULL;
globe->standard_err = 2;
globe->line_count = 0;
globe->token_num  = 0;
globe->stack_length = 0;
globe->head = NULL;
}

#include "monty.h"
/**
 * validate_arg - Validates the command-line argument count.
 *
 * This function checks the number of command-line arguments passed to
 * the program and performs validation on the argument count.
 *
 * @argument: The number of command-line arguments.
 * Return: None.
 */
void validate_arg(int argument)
{
int valid_arg_count = 2;
if (argument < valid_arg_count || argument > valid_arg_count)
{
dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
}

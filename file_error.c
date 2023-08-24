#include "monty.h"
/**
 * file_access_denied - Handles file access denied scenario.
 *
 * This function is called when there is a file access denial during program
 * execution. It performs actions to handle this scenario gracefully.
 *
 * @filename: The name of the file for which access was denied.
 * Return: None.
 */
void file_access_denied(char *filename)
{
dprintf(globe->standard_err, "Error: Can't open file %s\n", filename);
exit(EXIT_FAILURE);
}

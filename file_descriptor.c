#include "monty.h"
#include <stdio.h>
/**
* get_file_descriptor - open a file for reading
*@filename : name of the file
* Return : none
*/
void get_file_descriptor(char *filename)
{
/* assigning value to the file descriptor */
globe->file = fopen(filename, "r");
if (globe->file == NULL)
{
file_access_denied(filename);
}
}
/**
*close_file - close file descriptors open
*
*/

void close_file(void)
{
if (globe->file == NULL)
{
return;
}
fclose(globe->file);
globe->file = NULL;
}

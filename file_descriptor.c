#include "monty.h"
#include <stdio.h>
void get_file_descriptor(char *filename)
{
/* assigning value to the file descriptor */
globe->file =fopen(filename, "r");
if(globe->file == NULL)
{
fclose(globe->file);
file_access_denied(filename);
}
}
/**
*close_file - close file descriptors open
*
*/

void close_file()
{
if(globe->file == NULL)
{
return;
}
fclose(globe->file);
globe->file = NULL;
}

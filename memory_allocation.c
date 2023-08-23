#include "monty.h"
void memory_allocation_failed()
{
dprintf(globe->standard_err, "Error: malloc failed");
exit(EXIT_FAILURE);
}
/**
* fre_token - free each token
*/
void free_token()
{
int count = 0;
/* checking for empty tokens */
if (globe->tokens == NULL)
{
return;
}
/* free each pointer */
while(globe->tokens[count] != NULL)
{

free(globe->tokens[count]);
count++;
}
free(globe->tokens);
globe->tokens = NULL;

}

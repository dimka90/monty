#include "monty.h"
void validate_arg(int argument)
{
int valid_arg_count =2;
if(argument < valid_arg_count || argument > valid_arg_count)
{
dprintf(2, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}
}

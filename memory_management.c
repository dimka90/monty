#include "monty.h"
/**
* free_all_args- free all argument
*/

void free_all_args(void)
{

close_file();
free_token();
free_arguments();
}

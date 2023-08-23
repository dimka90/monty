#include "monty.h"
void initialise_args()
{
/* accessing global vairable */

globe = malloc(sizeof(global_v));
if(globe == NULL)
{
memory_allocation_failed();
}
globe->file = NULL;
globe->line = NULL;
globe->standard_err = 2;
globe->line_count = 0;
globe->token_num  = 0;
}

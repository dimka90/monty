#include "monty.h"
/**
*get_instruction - a function that retrieves a function pointer
*/
void get_instruction(void)
{
int counter = 0;
instruction_t instructions[] = {
{"push", &push},
{"pall", &pall},
{"pint", &pint},
{"pop", &pop},
{NULL, NULL}
};
if (globe->token_num == 0)
{
return;
}
for (; instructions[counter].opcode != NULL; counter++)
{
if (strcmp(instructions[counter].opcode, globe->tokens[0]) == 0)
{
globe->instruction->opcode = instructions[counter].opcode;
globe->instruction->f = instructions[counter].f;
return;
}
}
invalid_instruction();
}

/**
*invalid_instruction - prints invalid instruction code
*/
void invalid_instruction(void)
{
dprintf(globe->standard_err, "L%d: unknown instruction %s\n)",
	 globe->line_count, globe->tokens[0]);
close_file();
free_token();
free_arguments();
exit(EXIT_FAILURE);
}
/**
* run_instruction - run the instrution
* Return : None
*
*/

void run_instruction(void)
{
stack_t *stack = NULL;
if (globe->token_num == 0)
{
return;
}
globe->instruction->f(&stack, globe->line_count);
}

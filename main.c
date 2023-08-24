#include "monty.h"
global_v *globe = NULL;
/**
 * main - Entry point of the program.
 *
 * This function is the entry point of the program and is responsible for
 * executing the main logic of the program. It accepts command-line arguments
 * and performs necessary setup before calling other functions to carry out
 * the program's tasks.
 *
 * @argc: The number of command-line arguments.
 * @argv: An array of strings containing the command-line arguments.
 * Return: 0 on success, an error code on failure.
 */
int main(int argc, char *argv[])
{
int file_error = -1;
size_t size = 0;
validate_arg(argc);
initialise_args();
/*Accesing the file name from the argv array*/
get_file_descriptor(argv[1]);
while (getline(&globe->line, &size, globe->file) != file_error)
{
globe->line_count++;
token_count();
tokenize();
get_instruction();
run_instruction();
free_token();
}
/**
*printf("%s", globe->line);
*printf("oops code%s\n", globe->tokens[1]);
*printf("line count%d", globe->line_count);
*printf("Token numbers %d", globe->token_num);
*/


close_file();
free_arguments();

return (0);
}

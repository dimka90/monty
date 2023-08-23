#include "monty.h"
global_v *globe = NULL;
int main(int argc, char *argv[])
{
int file_error = -1;
size_t size = 0;
validate_arg(argc);
initialise_args();
/*Accesing the file name from the argv array*/
get_file_descriptor(argv[1]);
while(getline(&globe->line, &size, globe->file) != file_error)
{
token_count();
tokenize();
/*printf("%s", globe->line); */
globe->line_count++;
printf("oops code%s\n",globe->tokens[1]);
}
printf("line count%d",globe->line_count);
printf("Token numbers %d", globe->token_num);
return (0);
}

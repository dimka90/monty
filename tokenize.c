#include "monty.h"
/**
* tokenize - break each line and store it
* Return: Return the number of word(tokens) in a line
*/
void tokenize(void)
{
int counter = 0;
char *token_copy = NULL;
char *token = NULL;
char *delims = " \n\t";
/* creating a 2d array using pointer to allocate space for each token(word) */
globe->tokens = malloc(sizeof(char *) * (globe->token_num + 1));
if (globe->tokens == NULL)
	memory_allocation_failed();
token_copy = malloc(sizeof(char) * strlen(globe->line) + 1);
if (token_copy == NULL)
{
free(globe->tokens);
memory_allocation_failed();
}
strcpy(token_copy, globe->line);
token = strtok(token_copy, delims);
while (token != NULL)
{
globe->tokens[counter] = malloc(sizeof(char) * strlen(token) + 1);
if (globe->tokens[counter] == NULL)
{
	memory_allocation_failed();
}
strcpy(globe->tokens[counter], token);
token = strtok(NULL, delims);
counter++;
}

globe->tokens[counter] = NULL;
free(token_copy);
}
/**
*token_count - count the number of tokens in a line
*Return: Return the number of word(tokens) in a line
*/
void token_count(void)
{
char *delims = " \n\t";
char *linecopy = NULL;
char *token = NULL;
/* counting the len of each line, adding +1 for null character */
int line_len = strlen(globe->line) + 1;
linecopy = malloc(sizeof(char) * line_len);
if (linecopy == NULL)
	memory_allocation_failed();
/* copying the cotent of each line */
strcpy(linecopy, globe->line);
token = strtok(linecopy, delims);
while (token != NULL)
{
/*updating the number of token */
globe->token_num++;
token = strtok(NULL, delims);
}
free(linecopy);
}

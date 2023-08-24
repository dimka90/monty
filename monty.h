#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE  200809L
#define _GNU_SOURCE
#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct global_var - Structure to hold global variables.
 *
 * This structure holds various global variables used throughout the program's
 * execution. These variables store information such as the file pointer for
 * reading/writing, the current line being processed, the standard error code,
 * the line count, an array of tokens, the number of tokens, and a pointer to
 * an instruction structure.
 *
 * @file: Pointer to the file being processed.
 * @line: Pointer to the current line being processed.
 * @standard_err: The standard error code.
 * @line_count: The count of lines processed.
 * @tokens: Array of tokens extracted from the line.
 * @token_num: The number of tokens.
 * @instruction: Pointer to an instruction structure.
 * @head: pointer to the last element insterted
 * @stack_length: keeps count of stack length
*/
typedef struct global_var
{
FILE *file;
char *line;
int standard_err;
unsigned int line_count;
char **tokens;
int token_num;
instruction_t *instruction;
int stack_length;
stack_t *head;
} global_v;

extern global_v *globe;
/*function protype */
void validate_arg(int agrc);
void intialise_args(void);
/*Managing memory */

void memory_allocation_failed(void);
void get_file_descriptor(char *filename);
void initialise_args(void);
void file_access_denied(char *filename);
void free_token(void);
void free_arguments(void);
void free_stack(stack_t *head);
void free_head(void);
void free_all_args(void);
/*tokenization function */
void token_count(void);
void tokenize(void);
/**/
void get_instruction(void);
void invalid_instruction(void);
void run_instruction(void);
/*opcodes code */
void push(stack_t **stack, unsigned int line_number);
void pall(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
void add(stack_t **stack, unsigned int line_number);
void nop(stack_t **stack, unsigned int line_number);
void mul(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void _div(stack_t **stack, unsigned int line_number);
void mod(stack_t **stack, unsigned int line_number);
/* stack operation */
void delete_stack_node(void);
/* File prototype */
void close_file(void);
/*utils function */
int is_number(char *str);
#endif

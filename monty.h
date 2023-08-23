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
} global_v;

extern global_v *globe;
/*function protype */
void validate_arg(int agrc);
void intialise_args();
/*Managing memory */

void memory_allocation_failed();
void get_file_descriptor(char *filename);
void initialise_args();
void file_access_denied(char *filename);
void free_token();
/*tokenization function */
void token_count();
void tokenize();
/**/
void get_instruction(void);
void invalid_instruction(void);
/*opcodes code */
void push(stack_t **stack, unsigned int line_number);
/* File prototype */
void close_file();
#endif

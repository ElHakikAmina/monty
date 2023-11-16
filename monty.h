#ifndef MOnTY_H
#define MOnTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_sV2 - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prevV2: points to the prevV2ious element of the stack (or queue)
 * @nextV2: points to the nextV2 element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_sV2
{
	int n;
	struct stack_sV2 *prevV2;
	struct stack_sV2 *nextV2;
} stack_tV2;
/**
 * struct busV2_sV2 - variables -args, file, line contentV2
 * @arg: value
 * @file: pointer to monty file
 * @contentV2: line contentV2
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct busV2_sV2
{
	char *arg;
	FILE *file;
	char *contentV2;
	int lifi;
}  busV2_tV2;
extern busV2_tV2 busV2;
/**
 * struct instruction_sV2 - opcodeV2 and its function
 * @opcodeV2: the opcodeV2
 * @f: function to handle the opcodeV2
 *
 * Description: opcodeV2 and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_sV2
{
	char *opcodeV2;
	void (*f)(stack_tV2 **stack, unsigned int line_number);
} instruction_tV2;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *contentV2);
void f_pushV2(stack_tV2 **headV2, unsigned int number);
void f_pallV2(stack_tV2 **headV2, unsigned int number);
void f_pintV2(stack_tV2 **headV2, unsigned int number);
int executeV2(char *contentV2, stack_tV2 **headV2, unsigned int counterV2, FILE *file);
void free_stackV2(stack_tV2 *headV2);
void f_popV2(stack_tV2 **headV2, unsigned int counterV2);
void f_swapV2(stack_tV2 **headV2, unsigned int counterV2);
void f_addV2(stack_tV2 **headV2, unsigned int counterV2);
void f_nopV2(stack_tV2 **headV2, unsigned int counterV2);
void f_subV2(stack_tV2 **headV2, unsigned int counterV2);
void f_divV2(stack_tV2 **headV2, unsigned int counterV2);
void f_mulV2(stack_tV2 **headV2, unsigned int counterV2);
void f_modV2(stack_tV2 **headV2, unsigned int counterV2);
void f_pcharV2(stack_tV2 **headV2, unsigned int counterV2);
void f_pstrV2(stack_tV2 **headV2, unsigned int counterV2);
void f_rotlV2(stack_tV2 **headV2, unsigned int counterV2);
void f_rotrV2(stack_tV2 **headV2, __attribute__((unused)) unsigned int counterV2);
void addnodeV2(stack_tV2 **headV2, int n);
void addqueueV2(stack_tV2 **headV2, int n);
void f_queueV2(stack_tV2 **headV2, unsigned int counterV2);
void f_stackV2(stack_tV2 **headV2, unsigned int counterV2);
#endif

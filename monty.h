#ifndef MONTY_H
#define MONTY_H
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
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_sV2
{
	int n;
	struct stack_sV2 *prev;
	struct stack_sV2 *next;
} stack_tV2;
/**
 * struct bus_sV2 - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_sV2
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_tV2;
extern bus_tV2 bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_tV2 **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void f_push(stack_tV2 **head, unsigned int number);
void f_pall(stack_tV2 **head, unsigned int number);
void f_pint(stack_tV2 **head, unsigned int number);
int execute(char *content, stack_tV2 **head, unsigned int counter, FILE *file);
void free_stack(stack_tV2 *head);
void f_pop(stack_tV2 **head, unsigned int counter);
void f_swap(stack_tV2 **head, unsigned int counter);
void f_add(stack_tV2 **head, unsigned int counter);
void f_nop(stack_tV2 **head, unsigned int counter);
void f_sub(stack_tV2 **head, unsigned int counter);
void f_div(stack_tV2 **head, unsigned int counter);
void f_mul(stack_tV2 **head, unsigned int counter);
void f_mod(stack_tV2 **head, unsigned int counter);
void f_pchar(stack_tV2 **head, unsigned int counter);
void f_pstr(stack_tV2 **head, unsigned int counter);
void f_rotl(stack_tV2 **head, unsigned int counter);
void f_rotr(stack_tV2 **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_tV2 **head, int n);
void addqueue(stack_tV2 **head, int n);
void f_queue(stack_tV2 **head, unsigned int counter);
void f_stack(stack_tV2 **head, unsigned int counter);
#endif

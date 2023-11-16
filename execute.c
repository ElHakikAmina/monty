#include "monty.h"
/**
* execute - executes the opcode
* @stack: head linked list - stack
* @counter: line_counter
* @file: poiner to monty file
* @contentV2: line contentV2
* Return: no return
*/
int execute(char *contentV2, stack_tV2 **stack, unsigned int counter, FILE *file)
{
	instruction_tV2 opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stackV2},
				{NULL, NULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(contentV2, " \n\t");
	if (op && op[0] == '#')
		return (0);
	busV2.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(contentV2);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

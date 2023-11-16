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
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pintV2},
				{"pop", f_popV2},
				{"swap", f_swapV2},
				{"add", f_addV2},
				{"nop", f_nopV2},
				{"sub", f_subV2},
				{"div", f_divV2},
				{"mul", f_mulV2},
				{"mod", f_modV2},
				{"pchar", f_pcharV2},
				{"pstr", f_pstrV2},
				{"rotl", f_rotlV2},
				{"rotr", f_rotrV2},
				{"queue", f_queueV2},
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
		free_stackV2(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

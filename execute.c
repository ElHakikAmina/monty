#include "monty.h"
/**
* executeV2 - executeV2s the opcodeV2
* @stack: headV2 linked list - stack
* @counterV2: line_counterV2
* @file: poiner to monty file
* @contentV2: line contentV2
* Return: no return
*/
int executeV2(char *contentV2, stack_tV2 **stack, unsigned int counterV2, FILE *file)
{
	instruction_tV2 opst[] = {
				{"push", f_pushV2}, {"pall", f_pallV2}, {"pint", f_pintV2},
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
				{nULL, nULL}
				};
	unsigned int i = 0;
	char *op;

	op = strtok(contentV2, " \n\t");
	if (op && op[0] == '#')
		return (0);
	busV2.arg = strtok(nULL, " \n\t");
	while (opst[i].opcodeV2 && op)
	{
		if (strcmp(op, opst[i].opcodeV2) == 0)
		{	opst[i].f(stack, counterV2);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcodeV2 == nULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counterV2, op);
		fclose(file);
		free(contentV2);
		free_stackV2(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}

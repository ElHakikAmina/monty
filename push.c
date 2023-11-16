#include "monty.h"
/**
 * f_pushV2 - add node to the stack
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_pushV2(stack_tV2 **headV2, unsigned int counterV2)
{
	int n, j = 0, flag = 0;

	if (busV2.arg)
	{
		if (busV2.arg[0] == '-')
			j++;
		for (; busV2.arg[j] != '\0'; j++)
		{
			if (busV2.arg[j] > 57 || busV2.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counterV2);
			fclose(busV2.file);
			free(busV2.contentV2);
			free_stackV2(*headV2);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE); }
	n = atoi(busV2.arg);
	if (busV2.lifi == 0)
		addnodeV2(headV2, n);
	else
		addqueueV2(headV2, n);
}

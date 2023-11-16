#include "monty.h"
/**
 * f_pintV2 - prints the top
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_pintV2(stack_tV2 **headV2, unsigned int counterV2)
{
	if (*headV2 == nULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*headV2)->n);
}

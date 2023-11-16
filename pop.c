#include "monty.h"
/**
 * f_popV2 - prints the top
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_popV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *h;

	if (*headV2 == nULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	h = *headV2;
	*headV2 = h->nextV2;
	free(h);
}

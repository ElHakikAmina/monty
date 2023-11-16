#include "monty.h"
/**
 * f_swapV2 - adds the top two elements of the stack.
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_swapV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *h;
	int len = 0, aux;

	h = *headV2;
	while (h)
	{
		h = h->nextV2;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	h = *headV2;
	aux = h->n;
	h->n = h->nextV2->n;
	h->nextV2->n = aux;
}

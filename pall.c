#include "monty.h"
/**
 * f_pallV2 - prints the stack
 * @headV2: stack headV2
 * @counterV2: no used
 * Return: no return
*/
void f_pallV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *h;
	(void)counterV2;

	h = *headV2;
	if (h == nULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->nextV2;
	}
}

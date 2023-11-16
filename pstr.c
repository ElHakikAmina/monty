#include "monty.h"
/**
 * f_pstrV2 - prints the string starting at the top of the stack,
 * followed by a new
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_pstrV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *h;
	(void)counterV2;

	h = *headV2;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->nextV2;
	}
	printf("\n");
}

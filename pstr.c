#include "monty.h"
/**
 * f_pstrV2 - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counterV2: line_number
 * Return: no return
*/
void f_pstrV2(stack_tV2 **head, unsigned int counterV2)
{
	stack_tV2 *h;
	(void)counterV2;

	h = *head;
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

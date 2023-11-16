#include "monty.h"
/**
 * f_pstrV2 - prints the string starting at the top of the stack,
 * followed by a new
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pstrV2(stack_tV2 **head, unsigned int counter)
{
	stack_tV2 *h;
	(void)counter;

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

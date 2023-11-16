#include "monty.h"
/**
 * f_pallV2 - prints the stack
 * @head: stack head
 * @counterV2: no used
 * Return: no return
*/
void f_pallV2(stack_tV2 **head, unsigned int counterV2)
{
	stack_tV2 *h;
	(void)counterV2;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->nextV2;
	}
}

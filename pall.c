#include "monty.h"
/**
 * f_pallV2 - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pallV2(stack_tV2 **head, unsigned int counter)
{
	stack_tV2 *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->nextV2;
	}
}

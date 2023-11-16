#include "monty.h"
/**
 * f_addV2 - adds the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_addV2(stack_tV2 **head, unsigned int counter)
{
	stack_tV2 *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->nextV2;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->nextV2->n;
	h->nextV2->n = aux;
	*head = h->nextV2;
	free(h);
}

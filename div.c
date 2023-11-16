#include "monty.h"
/**
 * f_divV2 - divides the top two elements of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_divV2(stack_tV2 **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE);
	}
	aux = h->nextV2->n / h->n;
	h->nextV2->n = aux;
	*head = h->nextV2;
	free(h);
}

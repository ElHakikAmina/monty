#include "monty.h"
/**
 * f_popV2 - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_popV2(stack_tV2 **head, unsigned int counter)
{
	stack_tV2 *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->nextV2;
	free(h);
}

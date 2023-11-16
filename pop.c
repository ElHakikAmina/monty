#include "monty.h"
/**
 * f_popV2 - prints the top
 * @head: stack head
 * @counterV2: line_number
 * Return: no return
*/
void f_popV2(stack_tV2 **head, unsigned int counterV2)
{
	stack_tV2 *h;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	*head = h->nextV2;
	free(h);
}

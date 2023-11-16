#include "monty.h"
/**
 * f_pintV2 - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pintV2(stack_tV2 **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

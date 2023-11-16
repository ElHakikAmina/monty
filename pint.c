#include "monty.h"
/**
 * f_pintV2 - prints the top
 * @head: stack head
 * @counterV2: line_number
 * Return: no return
*/
void f_pintV2(stack_tV2 **head, unsigned int counterV2)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}

#include "monty.h"
/**
 * f_pcharV2 - prints the char at the top of the stack,
 * followed by a new line
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_pcharV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *h;

	h = *headV2;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}

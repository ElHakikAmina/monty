#include "monty.h"
/**
  *f_subV2- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_subV2(stack_tV2 **head, unsigned int counter)
{
	stack_tV2 *aux;
	int sus, nodes;

	aux = *head;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->nextV2;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	sus = aux->nextV2->n - aux->n;
	aux->nextV2->n = sus;
	*head = aux->nextV2;
	free(aux);
}

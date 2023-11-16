#include "monty.h"
/**
  *f_subV2- sustration
  *@headV2: stack headV2
  *@counterV2: line_number
  *Return: no return
 */
void f_subV2(stack_tV2 **headV2, unsigned int counterV2)
{
	stack_tV2 *aux;
	int sus, nodes;

	aux = *headV2;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->nextV2;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counterV2);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*headV2);
		exit(EXIT_FAILURE);
	}
	aux = *headV2;
	sus = aux->nextV2->n - aux->n;
	aux->nextV2->n = sus;
	*headV2 = aux->nextV2;
	free(aux);
}

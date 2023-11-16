#include "monty.h"
/**
* free_stackV2 - frees a doubly linked list
* @headV2: headV2 of the stack
*/
void free_stackV2(stack_tV2 *headV2)
{
	stack_tV2 *aux;

	aux = headV2;
	while (headV2)
	{
		aux = headV2->nextV2;
		free(headV2);
		headV2 = aux;
	}
}

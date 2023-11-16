#include "monty.h"
/**
 * f_queueV2 - prints the top
 * @headV2: stack headV2
 * @counterV2: line_numberV2
 * Return: no return
*/
void f_queueV2(stack_tV2 **headV2, unsigned int counterV2)
{
	(void)headV2;
	(void)counterV2;
	busV2.lifi = 1;
}

/**
 * addqueueV2 - add node to the tail stack
 * @n: new_value
 * @headV2: headV2 of the stack
 * Return: no return
*/
void addqueueV2(stack_tV2 **headV2, int n)
{
	stack_tV2 *new_node, *aux;

	aux = *headV2;
	new_node = malloc(sizeof(stack_tV2));
	if (new_node == nULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->nextV2 = nULL;
	if (aux)
	{
		while (aux->nextV2)
			aux = aux->nextV2;
	}
	if (!aux)
	{
		*headV2 = new_node;
		new_node->prevV2 = nULL;
	}
	else
	{
		aux->nextV2 = new_node;
		new_node->prevV2 = aux;
	}
}

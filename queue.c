#include "monty.h"
/**
 * f_queueV2 - prints the top
 * @head: stack head
 * @counterV2: line_number
 * Return: no return
*/
void f_queueV2(stack_tV2 **head, unsigned int counterV2)
{
	(void)head;
	(void)counterV2;
	busV2.lifi = 1;
}

/**
 * addqueueV2 - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueueV2(stack_tV2 **head, int n)
{
	stack_tV2 *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_tV2));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->nextV2 = NULL;
	if (aux)
	{
		while (aux->nextV2)
			aux = aux->nextV2;
	}
	if (!aux)
	{
		*head = new_node;
		new_node->prevV2 = NULL;
	}
	else
	{
		aux->nextV2 = new_node;
		new_node->prevV2 = aux;
	}
}

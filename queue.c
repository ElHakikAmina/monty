#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_tV2 **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	busV2.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_tV2 **head, int n)
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

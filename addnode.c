#include "monty.h"
/**
 * addnodeV2 - add node to the head stack
 * @head: head of the stack
 * @n: new_value
 * Return: no return
*/
void addnodeV2(stack_tV2 **head, int n)
{

	stack_tV2 *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_tV2));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prevV2 = new_node;
	new_node->n = n;
	new_node->nextV2 = *head;
	new_node->prevV2 = NULL;
	*head = new_node;
}

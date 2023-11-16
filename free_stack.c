#include "monty.h"
/**
* free_stack - frees a doubly linked list
* @head: head of the stack
*/
void free_stack(stack_tV2 *head)
{
	stack_tV2 *aux;

	aux = head;
	while (head)
	{
		aux = head->nextV2;
		free(head);
		head = aux;
	}
}

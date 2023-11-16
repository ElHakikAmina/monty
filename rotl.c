#include "monty.h"
/**
  *f_rotlV2- rotates the stack to the top
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotlV2(stack_tV2 **head,  __attribute__((unused)) unsigned int counter)
{
	stack_tV2 *tmp = *head, *aux;

	if (*head == NULL || (*head)->nextV2 == NULL)
	{
		return;
	}
	aux = (*head)->nextV2;
	aux->prevV2 = NULL;
	while (tmp->nextV2 != NULL)
	{
		tmp = tmp->nextV2;
	}
	tmp->nextV2 = *head;
	(*head)->nextV2 = NULL;
	(*head)->prevV2 = tmp;
	(*head) = aux;
}

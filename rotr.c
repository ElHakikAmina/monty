#include "monty.h"
/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotr(stack_tV2 **head, __attribute__((unused)) unsigned int counter)
{
	stack_tV2 *copy;

	copy = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *head;
	copy->prevV2->next = NULL;
	copy->prevV2 = NULL;
	(*head)->prevV2 = copy;
	(*head) = copy;
}

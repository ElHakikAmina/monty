#include "monty.h"
/**
  *f_rotrV2- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_rotrV2(stack_tV2 **head, __attribute__((unused)) unsigned int counter)
{
	stack_tV2 *copy;

	copy = *head;
	if (*head == NULL || (*head)->nextV2 == NULL)
	{
		return;
	}
	while (copy->nextV2)
	{
		copy = copy->nextV2;
	}
	copy->nextV2 = *head;
	copy->prevV2->nextV2 = NULL;
	copy->prevV2 = NULL;
	(*head)->prevV2 = copy;
	(*head) = copy;
}

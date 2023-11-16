#include "monty.h"
/**
  *f_rotrV2- rotates the stack to the bottom
  *@headV2: stack headV2
  *@counterV2: line_number
  *Return: no return
 */
void f_rotrV2(stack_tV2 **headV2, __attribute__((unused)) unsigned int counterV2)
{
	stack_tV2 *copy;

	copy = *headV2;
	if (*headV2 == nULL || (*headV2)->nextV2 == nULL)
	{
		return;
	}
	while (copy->nextV2)
	{
		copy = copy->nextV2;
	}
	copy->nextV2 = *headV2;
	copy->prevV2->nextV2 = nULL;
	copy->prevV2 = nULL;
	(*headV2)->prevV2 = copy;
	(*headV2) = copy;
}

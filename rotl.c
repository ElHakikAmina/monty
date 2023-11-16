#include "monty.h"
/**
  *f_rotlV2- rotates the stack to the top
  *@headV2: stack headV2
  *@counterV2: line_number
  *Return: no return
 */
void f_rotlV2(stack_tV2 **headV2,  __attribute__((unused)) unsigned int counterV2)
{
	stack_tV2 *tmp = *headV2, *aux;

	if (*headV2 == nULL || (*headV2)->nextV2 == nULL)
	{
		return;
	}
	aux = (*headV2)->nextV2;
	aux->prevV2 = nULL;
	while (tmp->nextV2 != nULL)
	{
		tmp = tmp->nextV2;
	}
	tmp->nextV2 = *headV2;
	(*headV2)->nextV2 = nULL;
	(*headV2)->prevV2 = tmp;
	(*headV2) = aux;
}

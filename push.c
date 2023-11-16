#include "monty.h"
/**
 * f_pushV2 - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_pushV2(stack_tV2 **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (busV2.arg)
	{
		if (busV2.arg[0] == '-')
			j++;
		for (; busV2.arg[j] != '\0'; j++)
		{
			if (busV2.arg[j] > 57 || busV2.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(busV2.file);
			free(busV2.contentV2);
			free_stackV2(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(busV2.file);
		free(busV2.contentV2);
		free_stackV2(*head);
		exit(EXIT_FAILURE); }
	n = atoi(busV2.arg);
	if (busV2.lifi == 0)
		addnodeV2(head, n);
	else
		addqueueV2(head, n);
}

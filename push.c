#include "monty.h"
/**
 * push - add node to the stack
 * @h: stack head
 * @counter: line_number
 * Return: no return
*/
void push(stack_t *h, unsigned int counter)
{
	int i;
	int j = 0;
	int flag = 0;

	if (stk.arg)
	{
		if (stk.arg[0] == '-')
			j++;
		for (stk.arg[j] != '\0'; j++)
		{
			if (stk.arg[j] > '9' || stk.arg[j] < '0')
				flag = 1;
		}
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(stk.file);
			free(stk.content);
			free_stack(stack);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		n = atoi(stk.arg);
		if (stk.lifi == 0)
			addnode(h, i);
		else
			addqueue(h, i);
	}



}

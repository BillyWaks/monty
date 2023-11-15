#include "monty.h"

/**
 * pall - printts all elements of the stack
 * @h: pointer to the top of the stack
 * @counter: not used
 * Return: void
 */
void pall(stack_t *h, unsigned int counter)
{
	(void)counter;
	while (h != NULL)
	{
		printf("%d\n", h->data);
		h = h->next;
	}
}


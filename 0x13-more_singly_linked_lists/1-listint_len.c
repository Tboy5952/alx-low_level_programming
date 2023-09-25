#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*listint_len - function that returns the number of elements in a linked
*@h:head nods
*Return:length of elemement or nods
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}

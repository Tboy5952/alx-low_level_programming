#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_list:function that prints all the elements
 *@h:head that stores the address of first node
 *Return:node
 */
size_t print_list(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}

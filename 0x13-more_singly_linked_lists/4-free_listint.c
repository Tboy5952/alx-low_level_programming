#include "lists.h"

/**
 * free_listint - Frees a list_t linked list.
 * @head: A pointer to the head of the list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

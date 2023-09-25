#include "lists.h"

/**
 * free_listint2 - 
 * @head: A pointer to the head of the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current;
		current = current->next;
		free(tmp);
	}
	*head = NULL;
}

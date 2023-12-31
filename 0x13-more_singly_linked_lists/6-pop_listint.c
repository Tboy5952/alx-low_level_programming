#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - function that deletes the head node
  * @head: head of the list
  * Return: contents of head
  */
int pop_listint(listint_t **head)
{
	int j;
	listint_t *current, *tmp;

	if (head == NULL)
		return (0);
	tmp = current = *head;
	if (*head)
	{
		j = current->n;
		*head = current->next;
		free(tmp);
	}
	else
		j = 0;
	return (j);
}

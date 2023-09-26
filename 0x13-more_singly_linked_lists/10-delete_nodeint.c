#include "lists.h"
#include <stdlib.h>
/**
  * insert_nodeint_at_index - insert a node at index
  * @head: head of the list
  * @index: location to insert node
  * @n: value of the inserted node
  * Return: pointer to head of list
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *current, *newnode;

	current = *head;
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (index == 0)
	{
		newnode->next = current;
		*head = newnode;
		return (*head);
	}
	while (index > 1)
	{
		current = current->next;
		index--;
		if (!current)
		{
			free(newnode);
			return (NULL);
		}
	}
	newnode->next = current->next;
	current->next = newnode;
	return (newnode);
}

#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a
 * listint_t linked list.
 *
 * @head: double pointer to the first node in the list.
 *
 * @index: index of the node to delete
 *
 * Return: pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		listint_t *tmp = *head;
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	listint_t *prev = NULL;
	listint_t *current = *head;

	for (unsigned int i = 0; i < index; i++)

	{
		prev = current;
		current = current->next;
		if (current == NULL)
		{
			return (-1);
		}
	}

	prev->next = current->next;
	free(current);
	return (1);
}


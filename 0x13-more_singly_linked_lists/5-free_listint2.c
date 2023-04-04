#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 *
 * @head: A pointer to a pointer to the head node of the list.
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *adjacent;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		adjacent = (*head)->adjacent;
		free(*head);
		*head = adjacent;
	}
} /*BenieShann*/

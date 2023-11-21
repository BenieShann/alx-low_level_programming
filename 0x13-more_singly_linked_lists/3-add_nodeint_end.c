#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: A pointer to a pointer to the head node of the list.
 * @n: The integer to be added to the new node.
 *
 * Return: A pointer to the new node, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *current;

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
	return (NULL);
	}

	/* Initialize the new node */
	new_node->n = n;
	new_node->next = (NULL);

	/* If the list is empty, make the new node the head */
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}

	/* Traverse the list to the end */
	current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}

	/* Add the new node to the end of the list */
	current->next = new_node;

	return (new_node);
}


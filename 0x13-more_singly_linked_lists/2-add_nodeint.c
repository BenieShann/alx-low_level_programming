#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - Add a new node at the beginning of a listint_t list.
 *
 * @head: Pointer to the pointer to the first element of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL); /* Return NULL if malloc failed */
	}

	new_node->n = n; /* Assign the value n to the new node */
	new_node->next = *head; /* Set the next pointer of the new node*/
				/* to the current head */

	*head = new_node; /* Update the head pointer to point to the new node */

	return (new_node); /* Return the address of the new node */
}

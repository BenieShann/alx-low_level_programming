#include "lists.h"

/**
 * free_list - Frees linked list of type list_t
 * @head: Pointer to head of the linked list
 *
 * Return: no return.
 */

void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}

#include "lists.h"

/**
 * free_list - Frees a linked list of type list_t
 * @head: Pointer to the head of the linked list
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

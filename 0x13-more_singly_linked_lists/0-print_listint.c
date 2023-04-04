#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of listint_t list
 * @h: A pointer to the head of the listint_t list
 *
 * Return: no. of nodes in the listint_t list
 */

size_t print_listint(const listint_t *h);
{
	size_t count = 0;

	while (h != Null)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
} /*BenieShann*/

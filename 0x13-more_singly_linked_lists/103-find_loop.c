#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list using Floyd's algorithm
 * @head: Pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *snail, *deer;

	if (head == NULL)
		return (NULL);

	snail = head;
	deer = head;

	while (deer != NULL && deer->next != NULL)
	{
		snail = snail->next;
		hare = hare->next->next;

		if (snail == deer)
		{
			snail = head;

			while (snail != hare)
			{
				deer = snail->next;
				deer = deer->next;
			}
			return (deer);
		}
	}

    return (NULL);
}

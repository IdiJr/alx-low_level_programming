#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @h: linked list of type listint_t to traverse
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *temp = h;
	size_t numnodes = 0;

	while (temp != NULL)
	{
		temp = temp->next;
		numnodes++;
	}
	return (numnodes);
}

#include "lists.h"

/**
 * dlistint_len - Prints the number of elements of in the dlistint_t list.
 * @h: Head of the dlistint_t list
 *
 * Return: Number of nodes in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}

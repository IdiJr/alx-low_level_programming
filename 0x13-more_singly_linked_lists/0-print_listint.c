#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Pointer head of the linked list.
 *
 * Return: number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp = h;
	size_t numnodes = 0;

	for (; temp != NULL; temp = temp->next, numnodes++)
	{
		printf("%d\n", temp->n);
	}
	return (numnodes);
}

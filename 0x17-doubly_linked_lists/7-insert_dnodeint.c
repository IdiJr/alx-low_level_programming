#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at the given position
 * in dlistint_t
 * @h: pointer to the head of the dlistint_t list.
 * @idx: position to insert new node
 * @n: The integer to be contained by the new node
 *
 * Return: NULL on failure else, address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		idx--;
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}

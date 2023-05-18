#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the dlistint_t list.
 * @head: pointer to the head of the dlistint_t list
 * @n: The integer to be contained by the node
 *
 * Return: NULL on failure else, the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	end = *head;
	while (end->next)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}

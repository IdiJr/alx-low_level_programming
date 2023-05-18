#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of the dlistint_t list.
 * @head: Head of the dlistint_t list.
 * @index: index of the new node
 *
 * Return: 1 on success, -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *prev;
	unsigned int a;

	current = *head;

	if (current)
		while (current->prev != NULL)
			current = current->prev;
	a = 0;

	while (current)
	{
		if (a == index)
		{
			if (a == 0)
			{
				*head = current->next;
				if (*head)
					(*head)->prev = NULL;
			}
			else
			{
				prev->next = current->next;

				if (current->next != NULL)
					current->next->prev = prev;
			}
			free(current);
			return (1);
		}
		prev = current;
		current = current->next;
		a++;
	}
	return (-1);
}

#include "lists.h"

/**
 * free_dlistint - frees the dlistint_t list.
 * @head: Head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

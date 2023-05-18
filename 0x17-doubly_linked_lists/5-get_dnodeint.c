#include "lists.h"

/**
 * get_dnodeint_at_index - finds and returns a node in the dlistint_t list.
 * @head: Head of the dlistint_t list.
 * @index: node to be located
 *
 * Return: NUll if node does not exist else, address of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur = head;

	while (cur != NULL && index > 0)
	{
		cur = cur->next;
		index--;
	}
	if (index == 0)
		return (cur);
	else
		return (NULL);

}

#include "lists.h"

/**
 * sum_dlistint - adds all the data(n) of the dlistint_t list.
 * @head: Head of the dlistint_t list.
 *
 * Return: 0 if list is empty else, sum of all data
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
		return (sum);
}

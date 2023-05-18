#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to head of list
 * Return: sum of all data or 0 if list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}

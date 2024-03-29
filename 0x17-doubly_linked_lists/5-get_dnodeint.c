#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to head of list
 * @index: index of node to return
 * Return: address of node at index or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int i = 0;

	while (p)
	{
		if (i == index)
			return (p);
		i++;
		p = p->next;
	}
	return (NULL);
}

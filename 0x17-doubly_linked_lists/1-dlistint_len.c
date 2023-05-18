#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t cnt = 0;

	while (p)
	{
		cnt++;
		p = p->next;
	}
	return (cnt);
}

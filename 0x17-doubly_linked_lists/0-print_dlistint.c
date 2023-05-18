#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to head of list
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t cnt = 0;

	while (p)
	{
		printf("%d\n", p->n);
		cnt++;
		p = p->next;
	}
	return (cnt);
}

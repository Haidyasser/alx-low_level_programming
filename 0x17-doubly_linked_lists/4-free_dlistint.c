#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p = head;

	while (p)
	{
		p = p->next;
		free(head);
		head = p;
	}
}

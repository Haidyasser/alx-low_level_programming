#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @n: integer to be included in new node
 *
 * Return: address of new element or NULL if it fails
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *p = *head;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new_node;
		new_node->prev = NULL;
		new_node->next = NULL;
		new_node->n = n;
		return (new_node);
	}

	while (p->next)
		p = p->next;

	p->next = new_node;
	new_node->prev = p;
	new_node->next = NULL;
	new_node->n = n;

	return (new_node);
}
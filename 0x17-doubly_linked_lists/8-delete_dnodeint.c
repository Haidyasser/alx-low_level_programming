#include "list.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t list
 * @head: pointer to pointer to head of list
 * @index: index of node to delete
 * Return: 1 if success, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head, *tmp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		tmp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (p)
	{
		if (i == index - 1)
		{
			if (p->next == NULL)
				return (-1);
			tmp = p->next;
			p->next = tmp->next;
			if (tmp->next != NULL)
				tmp->next->prev = p;
			free(tmp);
			return (1);
		}
		i++;
		p = p->next;
	}
	return (-1);
}

#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @h: double pointer to the head of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *temp;
	listint_t *current = *h;

	if (!h || !(*h))
		return (0);

	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	*h = NULL;
	return (count);
}


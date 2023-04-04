#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t print_loop(const listint_t *head, const listint_t *loop);
void print_node(const listint_t *node);

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (head == NULL)
		exit(98);

	slow = head;
	fast = head;

	/* Use two pointers to traverse the list */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		/* If there is a loop in the list */
		if (slow == fast)
		{
			count = print_loop(head, slow);
			return (count);
		}
	}

	/* Print the list if there is no loop */
	while (head != NULL)
	{
		print_node(head);
		head = head->next;
		count++;
	}

	return (count);
}

/**
 * print_loop - prints a loop in a listint_t linked list
 * @head: pointer to the head of the list
 * @loop: pointer to a node in the loop
 *
 * Return: the number of nodes in the loop
 */
size_t print_loop(const listint_t *head, const listint_t *loop)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	slow = head;
	fast = loop;

	while (slow != fast)
	{
		print_node(slow);
		slow = slow->next;
		fast = fast->next;
		count++;
	}
	print_node(slow);
	count++;

	return (count);
}

/**
 * print_node - prints a node in a listint_t linked list
 * @node: pointer to the node to print
 */
void print_node(const listint_t *node)
{
	char buffer[1024];
	int i;

	sprintf(buffer, "[%p] %d\n", (void *)node, node->n);

	for (i = 0; buffer[i] != '\0'; i++)
	{
		_putchar(buffer[i]);
	}
}

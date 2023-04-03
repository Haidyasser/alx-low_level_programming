#include <unistd.h>
#include "lists.h"

/**
 * _puts - prints a string to stdout
 * @str: The string to print
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
	if (h->str == NULL)
		_puts("[0] (nil)\n");
	else
	{
		_putchar('[');
	/* print the length of the string here */
		_putchar(']');
		_putchar(' ');
		_puts(h->str);
		_putchar('\n');
	}
		h = h->next;
		count++;
	}
	return (count);
}


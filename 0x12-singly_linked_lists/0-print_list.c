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
 * print_unsigned_int - prints an unsigned int to stdout
 * @n: The unsigned int to print
 */
void print_unsigned_int(unsigned int n)
{
	if (n / 10)
		print_unsigned_int(n / 10);
	_putchar(n % 10 + '0');
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
		{
			_puts("[0] (nil)");
			_putchar('\n');
		}
		else
		{
		_putchar('[');
		/* print the length of the string here */
		print_unsigned_int(h -> len);
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


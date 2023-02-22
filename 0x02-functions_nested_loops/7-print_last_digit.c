#include "main.h"
/**
 * print_last digit - prints the last digit.
 *@n : the number to check.
 * Return: number.
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
		n *= -1;
	_putchar(n + '0');
	return (n);
}

#include "main.h"
/**
 * print_last digit - prints the last digit.
 *@n : the number to check.
 * Return: number.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n %= 10;
	_putchar(n);
	return (n);
}

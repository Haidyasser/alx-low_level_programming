#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int a, b;
	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 9; b++)
		{
			_putchar(a * b + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(a * b + '0');
		_putchar('\n');
	}
}

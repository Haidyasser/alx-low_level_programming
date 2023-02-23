#include "main.h"
/**
 *print_numbers - print digits from 0 to 9
 */
void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
		if (n != '4' && n != '2')
			_putchar(n);
	_putchar('\n');
}

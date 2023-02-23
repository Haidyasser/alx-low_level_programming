#include "main.h"
/**
 *more_numbers - print digits from 0 to 9 10 times
 */
void more_numbers(void)
{
	char n;
	int i = 10;

	while (i--)
	{
		for (n = '0'; n <= '9'; n++)
			_putchar(n);
		_putchar('\n');
	}
}

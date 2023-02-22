#include "main.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 *Return : 0
 */
void print_alphabet_x10(void)
{
	int cnt = 1;

	while (cnt++ <= 10)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
			_putchar (c);
		_putchar ('\n');
	}
}

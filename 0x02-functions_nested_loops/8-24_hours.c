#include "main.h"
/**
 * jack_bauer - prints the minutes.
 */
void jack_bauer(void)
{
	int m = 0, h;

	while (h < 24)
	{
		h += m / 60;
		m %= 60;
		if (h < 10)
			_putchar('0');
		_putchar(h + '0');
		if (m < 10)
			_putchar('0');
		_putchar(m + '0');
		_putchar('\n');
		m++;
}

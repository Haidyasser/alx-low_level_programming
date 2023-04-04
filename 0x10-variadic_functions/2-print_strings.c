#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: the string to be printed between the strings
 * @n: the number of strings passed to the function
 *
 * Description: This function prints the strings passed to it,
 * separated by the specified separator string. If separator is
 * NULL, it is not printed. If one of the strings is NULL, (nil)
 * is printed instead. A new line is printed at the end.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
	{
		char *str = va_arg(args, char*);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}


#include "main.h"

/**
 *factorial - calculating factorial of a number
 *@n: the number
 *Return: string the number factorial
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n < 2)
		return 1;
	return (n * factorial(n - 1));
}

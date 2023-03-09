#include "main.h"

/**
 *_pow_recursion - calculate x raised to the power of y
 *@x: the base
 *@y: the power
 *Return: x power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

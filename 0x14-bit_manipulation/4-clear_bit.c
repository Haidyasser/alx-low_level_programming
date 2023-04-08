#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the number to set the bit in
 * @index: the index of the bit to set, starting from 0
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index > sizeof(*n) * 8 - 1)
		return (-1);
	*n &= ~(1UL << index);
	return (1);
}

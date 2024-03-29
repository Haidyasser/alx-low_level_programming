#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	unsigned long int xor = (1UL * n) ^ m;

	while (xor)
	{
		cnt += xor & 1;
		xor >>= 1UL;
	}
	return (cnt);
}

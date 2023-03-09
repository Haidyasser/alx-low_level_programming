#include "main.h"

/**
 * isprime - Finds if the number is prime or not.
 * @num: The number.
 * @root: The root to be tested.
 *
 * Return: If the number is prime - 1.
 *         else 0.
 */

int isprime(int num, int root)
{
	if (root * root > num)
		return (1);

	if (num % root == 0)
		return (0);
	return (isprime(num, root + 1));
}

/**
 * is_prime_number - check if the number is prime or not.
 * @n: The number.
 *
 * Return: If 1 if the number is prime.
 *         else 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);

	if (n == 2)
		return (1);
	return (isprime(n, 2));
}

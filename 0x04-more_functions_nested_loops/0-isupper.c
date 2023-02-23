#include "main.h"
/**
 * _isupper - check if the letter is in uppercase.
 *@c : the char to check
 * Return: 1 if it is uppercase otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}

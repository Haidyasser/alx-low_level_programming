#include "main.h"
#include <stdlib.h>

/**
 *create_array -  a function that creates an array of chars, and initializes
 *it with a specific char
 *@size: array size
 *@c: character
 *Return: return an array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
                return ('\0');

	arr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

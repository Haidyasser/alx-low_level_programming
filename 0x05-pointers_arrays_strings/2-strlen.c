#include "main.h"
#include <stdio.h>

/**
 *_strlen - length of the string
 *@s: string
 *Return: string length
 */
int _strlen(char *s)
{
	int n = 0;

	while (*s++)
		n++;
	return (n);
}

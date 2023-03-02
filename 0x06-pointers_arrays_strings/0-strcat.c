#include "main.h"
#include <stdio.h>

/**
 *_strcat - concatenating two strings
 *@dest: first string
 *@src: second string
 *Return: pointer to string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = src[j];

	return (dest);
}

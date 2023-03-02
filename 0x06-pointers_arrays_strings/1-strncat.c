#include "main.h"

/**
 *_strncat - concatenating two strings with defined bytes
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 *Return: pointer to string
 */

char *_strcat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i])
		i++;
	for (j = 0; src[j] && j < n; j++)
		dest[i++] = src[j];

	return (dest);
}

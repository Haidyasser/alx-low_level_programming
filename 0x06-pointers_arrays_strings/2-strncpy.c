#include "main.h"

/**
 *_strncpy - copies a string
 *@dest: first string
 *@src: second string
 *@n: number of bytes
 *Return: pointer to string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	while (i <= n)
		dest[i++] = '\0';
	return (dest);
}

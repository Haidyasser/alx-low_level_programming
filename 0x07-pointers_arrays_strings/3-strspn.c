#include "main.h"

/**
 *_strspn - gets the length of a prefix substring.
 *@s: string
 *@accept: string
 *Return: the number of bytes in the initial segment of s
 *which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	int vis[30] = {0};

	while (s[i])
		vis[s[i++] - 'a']++;
	i = 0;
	while (accept[i] && vis[accept[i] - 'a'])
		i++;
	return (i);
}

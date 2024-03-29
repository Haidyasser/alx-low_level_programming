#include "main.h"
#include <stdlib.h>

/**
* str_concat - a function that concatenates two strings.
* @s1: first string
* @s2: second string
* Return: The returned pointer should point to a newly allocated space in
* memory which contains the contents of s1,
* followed by the contents of s2, and null terminated
*/

char *str_concat(char *s1, char *s2)
{
	char *conc;
	int len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	conc = malloc(len1 + len2 + 1);
	if (conc == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		conc[i] = s1[i];
	for (i = 0; i < len2; i++)
		conc[len1 + i] = s2[i];

	return (conc);
}

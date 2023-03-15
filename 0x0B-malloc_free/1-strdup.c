#include "main.h"
#include <stdlib.h>

/**
 *_strdup - a function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *@str: string
 *Return: pointer to string
 */

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	duplicate = malloc(len + 1);

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; index < len; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}

#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy the given string to a newly allocated space in memory
 * @str: string to copy
 * Return: return a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;
	len++;
	ptr = malloc(len * sizeof(char));

	if (!ptr)
		return (NULL);
	for (x = 0; x <= len; x++)
		ptr[x] = str[x];

	return (ptr);
}

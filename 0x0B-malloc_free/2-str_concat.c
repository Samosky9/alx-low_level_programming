#include "main.h"
#include <stdlib.h>

/**
 * str_concat - unction that concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: return a pointer to the two strings concatenated,
 * or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	unsigned int x, len1, len2 = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[len1]; len1++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[len2]; len2++)
			;
	len2++;
	ptr = malloc((len1 + len2) * sizeof(char));

	if (!ptr)
		return (NULL);
	for (x = 0; x <= (len1 + len2); x++)
	{
		if (x < len1)
			ptr[x] = s1[x];
		else
			ptr[x] = s2[x - len1];
	}
	return (ptr);
}

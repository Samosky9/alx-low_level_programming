#include "main.h"

/**
 * _strpbrk - searches a character in a string
 * @s: pointer we search for character
 * @accept: character we search for
 * Return: NULL if no such character is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *s1 = s - 1;
	int i;

	do {
		s1++;
		for (i = 0; *(accept + i) != '\0'; i++)
			if (*s1 == *(accept + i))
				return (s1);
	} while (*s1 != '\0');

	return (0);
}

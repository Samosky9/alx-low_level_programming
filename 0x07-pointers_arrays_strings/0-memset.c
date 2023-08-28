#include "main.h"

/**
 * _memset - memset function
 * @s: start point of string to change
 * @b: value that will  replace
 * @n: number of bytes to be changed
 * Return: changed pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

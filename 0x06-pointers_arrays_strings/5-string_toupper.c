#include "main.h"

/**
 * string_toupper - convert lowercase to uppercase
 * @a: string in lowercase
 * Return: uppercase
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; *(a + 1) != '\0'; i++)
	{
		if (*(a + 1) >= 'a' && *(a + 1) <= '2')
			*(a + i) -= 32;
	}
	return (a);
}

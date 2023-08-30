#include "main.h"

/**
 * wildcmp - compare string 1 and string 2 using wildcard
 * @s1: pointer to string 1
 * @s2: pointer to string 2
 * Return: 0 if no match, 1 if match
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 ==  *s2 || *s2 == '*')
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}

int main(void)
{
	char str1[] = "hello";
	char str2[] = "h*lo";

	if (wildcmp(str1, str2))
	{
		printf("The strings are identical.\n");
	}

	else
	{
		printf("The strings are not identical.\n");
	}
	return (0);
}

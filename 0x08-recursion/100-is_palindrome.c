#include "main.h"

/**
 * get_length - get length of a string
 * @str: pointer to a string
 * @len: length of a string
 * Return: length of a string
 */

int get_length(char *str, int len)
{
	if (*(str + len) != '\0')
	{
		return (get_length(str, ++len));
	}
	return (--len);
}

/**
 * check_pali - get length of a string
 * @f: pointer to a string
 * @r: length of a string
 * @len: length of a string
 * Return: 0 if its not palindrome, 1 if palindrome
 */

int check_pali(char *f, char *r, int len)
{
	if (*f == *(r + len) && len > 1)
	{
		f++;
		return (check_pali(f, r, --len));
	}
	if (len == 1)
		return (1);
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: pointer to a string
 * Return: 0 if its not palindrome, 1 if palindrome
 */

int is_palindrome(char *s)
{
	return (check_pali(s, s, get_length(s, 0)));
}

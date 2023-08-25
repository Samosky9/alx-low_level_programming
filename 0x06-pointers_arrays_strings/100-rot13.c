#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string parens
 * Return: *s
 */

char *rot13(char *s)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[1] != '\0'; i++)
	{
		for (j = 0; j < s2; j++)
		{
			if (s[1] == data1[j])
			{
				s[1] = datarot[j];
				break;
			}
		}
	}
	return (s);
}

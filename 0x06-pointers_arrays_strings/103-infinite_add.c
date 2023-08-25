#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * infinite_add - function that add two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: buffer size
 * Return: pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len_n1 = strlen(n1);
	int len_n2 = strlen(n2);
	int carry = 0;

	if (len_n1 > size_r - 1 || len_n2 > size_r - 1)
	{
	return (0);
	}
	int i, j, k;

	for (i = len_n1 - 1, j = len_n2 - 1, k = size_r - 2;
		i >= 0 || j >= 0; i--, j--, k--)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
	}

	if (carry > 0 && k >= 0)
	{
		r[k--] = carry + '0';
	}

	int shift = (k >= 0) ? k + 1 : 0;

	memmove(r, r + shift, size_r - shift);
	return (r);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 (success)
 */

int main(void)
{
	char n1[] = "12345";
	char n2[] = "678";
	int size_r = sizeof(n1) + sizeof(n2);
	char result[size_r];

	if (infinite_add(n1, n2, result, size_r))
	{
		printf("Sum: %s\n", result);
	}

	else
	{
		printf("Result could not fit in buffer.\n");
	}

	return (0);
}

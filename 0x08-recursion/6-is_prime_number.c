#include "main.h"

/**
 * help - help find prime function
 * @n: number to be checked
 * @x: check if n is divisible by x
 * Return: 0 if not prime number, 1 if prime number
 */

int help(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (help(n, ++x));
	return (0);
}

/**
 * is_prime_number - check if n is a prime number
 * @n: number to be checked
 * Return: 0 if not prime number, 1 if prime number
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (help(n, 2));
}

#include "main.h"

/**
 * help - help square function find square
 * @n: need to be square
 * @x: square of n
 * Return: natural square of n
 */

int help(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (help(n, ++x));
	return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	return (help(n, 0));
}

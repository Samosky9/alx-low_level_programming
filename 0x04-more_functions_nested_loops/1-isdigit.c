#include "main.h"

/**
 * _isdigit - check for a digit (from 0 through 9)
 * @c: check digit
 * Return: 1 if c is a digit, returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	return (0);
}

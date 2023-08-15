#include "main.h"

/**
 * _abs - computes the absolute value of an integar
 * @c: number to be computed
 * Return: 0 (Success)
 */

int _abs(int c)
{
	if (c < 0)
	{
	int abs_val;

	abs_val = c * -1;
	return (abs_val);
	}
	return (0);
}

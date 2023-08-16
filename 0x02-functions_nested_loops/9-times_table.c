#include "main.h"

/**
 * time_table - generates and prints the 9 times table, starting from 0
 *
 * Return: empty output
 */

int void times_table(void)
{
	int x, y, z, k;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	if (z == 0 && y == 0)
	_putchar(z + '0');
	else if (z > 9)
	{
	k = z % 10;
	z /= 10;
	_putchar(',');
	_putchar(' ');
	_putchar(z + '0');
	_putchar(k + '0');
	}
	else
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar(z + '0');
	}
	}
	_putchar('\n');
	}
}

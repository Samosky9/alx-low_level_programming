#include "main.h"

/**
 * print_number - print any integer using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	int count, x, y, k;

	x = 0;
	y = 1000000000;

	if (n == 0)
	_putchar('0');
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	for (count = 0; count < 10; count++)
	{
		if (n / y == 0 && x == 0)
		{
			y /= 10;
			continue;
		}
		else if (x == 0)
		{
			_putchar(-(n / y) + '0');
			x += 1;
		}
		else
		{
			k = (-(n / y) % 10);
			if (k < 0)
				k *= -1;
			_putchar(k + '0');
		}
		y /= 10;
	}
}

#include "main.h"

/**
 * print_line - print straight line using putchar of n sizes
 * @n: size of line
 */

void print_line(int n)
{
	for (; n > 0; n--)
	_putchar('_');
	_putchar('\n');
}

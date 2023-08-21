#include "main.h"

/**
 * swap_int - swaps to values pointers
 * @a: first variable to swap
 * @b: second variable to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

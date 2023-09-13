#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - sum of a and b
 * @a: first number
 * @b: second number
 * Return: sum if successful
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference of a and b
 * @a: first number
 * @b: second number
 * Return: difference if successful
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: first number
 * @b: second number
 * Return: multiplication of a and b if successful
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide a and b
 * @a: first number
 * @b: second number
 * Return: division if successul
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module of a and b
 * @a: first number
 * @b: second number
 * Return: remainder if successful
 */

int op_mod(int a, int b)
{
	return (a % b);
}


#include <stdio.h>

/**
 * main - prints its name, followed by a new line
 * @argc: number of arguments
 * @argv: an array of arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", *argv[0]);
	return (0);
}

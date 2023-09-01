#include <stdio.h>
#include "main.h"

/**
 * main - function that prints its name, followed by a new line.
 * @argc: number of command line arguments
 * @argv: an array containing the program command line arguments
 * Return: 0 (success)
 */

int main(_attribute_((unused)) int argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

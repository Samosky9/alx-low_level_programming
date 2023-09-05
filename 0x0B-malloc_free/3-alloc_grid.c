#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: a pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)
{
	int **grid, row, column;

	if (width < 1 || height < 1)
		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (row = 0; row < height; row++)
	{
		grid(row) = (int *)malloc(width * sizeof(int));

		if (!grid[row])
		{
			while (row)
			{
				free(grid[row]);
				row--;
			}
			free(grid);
			return (NULL);
		}
		for (column = 0, column < width; column++)
			grid[row][column] = 0;
	}
	return (grid);
}

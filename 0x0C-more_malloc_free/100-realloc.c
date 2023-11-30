#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: old size
 * @new_size: new size
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}

	else if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		void *new_ptr = malloc(new_size);

		if (new_ptr == NULL)
		{
			return (NULL);
		}

		size_t min_size = (old_size < new_size) ? old_size : new_size;

		memcpy(new_ptr, ptr, min_size);
		free(ptr);

		return (new_ptr);
	}
}

int main(void)
{
	int *arr = (int *)malloc(3 * sizeof(int));

	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;

	int *new_arr = (int *)_realloc(arr, 3 * sizeof(int), 5 * sizeof(int));

	for (int i = 0; i < 5; i++)
	{
		printf("%d ", new_arr[i]);
	}
	free(new_arr);

	return (0);
}

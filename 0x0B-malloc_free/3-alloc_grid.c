#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers.
 *@width: width of the grid
 *@height: height if the grid
 *Return: a pointer to a 2 dimensional array of integers.
 */

int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (--i; i >= 0; i--)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}

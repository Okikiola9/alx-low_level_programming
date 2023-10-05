#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees
 * @grid: grid
 * @height: h of grid
 * Description: relieve memory of grid
 * Return: nthing
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

#include "main.h"
#include <stdio.h>


/**
 * free_grid - frees a 2 dimentional grid
 * @grid: is the multidimensional array of intergers
 * @height: is the height of the grid.
 *
 * Return: no return
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height !=0)
	{
		for(; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}

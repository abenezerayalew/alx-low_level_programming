#include <stdlib.h>

/**
 * free_grid -  free up a 2d array grid
 *
 * @grid: double pointer 2d grid
 * @height: height of grid
 *
 * Return: nothing
*/

void free_grid(int **grid, int height)
{
int i = 0;
for (; i < height; i++)
	free(grid[i]);
free(grid);
}

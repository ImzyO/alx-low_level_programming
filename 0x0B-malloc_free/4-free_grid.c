#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid previosuly created by,
 * alloc_grid function
 * @grid: height array
 * @height: width array
 *
 * Return: pointer
 */

void free_grid(int **grid, int height)
{
	int k;

	for (k = 0; k < height; k++)
	{
		free(*(grid + k));
	}
	free(grid);
}

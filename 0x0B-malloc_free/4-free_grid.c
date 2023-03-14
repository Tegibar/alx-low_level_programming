#include "main.h"
#include <stdlib.h>

/**
  * free_grid - function to free memory
  * @grid: parameter 1
  * @height: parameter 2
  * Return: Always 0
  */
void free_grid(int **grid, int height)
{
int i, j;

for (i = 0; i < height; i++)
{
if (grid[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(grid[j]);
}

free(grid);
}
}

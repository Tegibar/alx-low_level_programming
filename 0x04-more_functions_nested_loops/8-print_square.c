#include "main.h"

/**
 * print_square - Prints a square n times
 * @size: number of squares
 * Return: empty
 */

void print_square(int size)
{
int i, j;

if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);
}
_putchar('\n');
}
}
}

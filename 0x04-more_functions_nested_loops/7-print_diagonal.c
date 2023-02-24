#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: Input
 * Return: Always 0
 */
void print_diagonal(int n)
{
int times;
int show = 92;
int empty;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (times = 0; times < n; times++)
{
for (empty = 1; empty <= times; empty++)
{
_putchar(' ');
}
_putchar(show);
_putchar('\n');
}
}
}

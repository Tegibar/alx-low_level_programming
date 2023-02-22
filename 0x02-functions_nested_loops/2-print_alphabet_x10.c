#include "main.h"
#include <ctype.h>

/**
 * _islower - check lowercase
 *
 * @c: character being checked
 *
 * Return: 1 if c is lowercase 0 if anything else
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}


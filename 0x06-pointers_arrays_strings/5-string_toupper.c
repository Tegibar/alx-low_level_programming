#include "main.h"
/**
 * string_toupper - functions that convert letters to uppercase.
 * Return: Upper case string letters
 * @s: string
 */
char *string_toupper(char *s)
{
int i = 0;

while (s[i] != 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = 'A' + (s[i] - 'a');
}
i++;
}
return (s);
}


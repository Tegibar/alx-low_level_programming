#include "main.h"
/**
 * cap_string - Capitalize all words of string
 * Return: Void
 * @s: String
 */
char *cap_string(char *s)
{
int i = 0, j = 0;

char seps[] = {16, 5, 4, 22, 30, 23, 17, 32, 17, 20, 21, 66, 68};

int size = sizeof(seps) / sizeof(seps[0]);

while (s[i] != 0)
{
char c = s[i];

for (j = 0; j < size; j++)
{
if (c == seps[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
{
s[i + 1] = 'A' + (s[i + 1] - 'a');
break;
}
}
i++;
}

if (s[0] >= 'a' && s[0] <= 'z')
s[0] = 'A' + (s[0] - 'a');

return (s);
}

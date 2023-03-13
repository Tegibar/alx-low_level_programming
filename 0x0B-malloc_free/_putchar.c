#include "main.h"
#include <unistd.h>

/**
 * _putchar - function that accepts charactor 
 * @c: charactor string
 * Return: 1 when success -1 when error
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

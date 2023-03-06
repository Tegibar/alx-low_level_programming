#include "main.h"
#include <unistd.h>

/**
* _putchar - write the charactor c to stdout
* @c: The charactor to print
*
* Return: on success 1.
* On error, -1 is returned and error is set appropritely.
*/
int _putchar(char c)
{
return (write(1, &c, 1));
}

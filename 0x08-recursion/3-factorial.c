#include "main.h"
/**
* factorial - function
* @n: Input
* Return: 0 (sucess)
*/
int factorial(int n)
{
if (n < 1)
return (-1);
else if (n == 0)
return (1);
else
return (n * factorial(n - 1));

}

#include "main.h"

/**
 * factorial - Returns a factorial of an integer
 * @n: The integer passed in 
 * Return: The factorial of the integer
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1);
}

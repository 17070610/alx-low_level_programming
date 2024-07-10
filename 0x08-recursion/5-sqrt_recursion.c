#include "main.h"

/**
 * _sqrt_recursion - Finds the natural square root of a number
 * @n: The number 
 * Return: Returns the natural square root of a number
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return _sqrt_helper(n, guess + 1);
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}

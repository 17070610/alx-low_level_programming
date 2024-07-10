#include "main.h"

/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number being checked
 * Return: Return 1 if a prime number, Otherwise 0
 */

int _is_prime_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor * divisor > n)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (_is_prime_helper(n, divisor + 1));
}

int is_prime_number(int n)
{
	return (_is_prime_helper(n, 2));
}

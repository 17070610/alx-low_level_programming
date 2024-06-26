#include "main.h"

/**
 * print_sign - Prints the sign of a number passed in as arg
 * @n: the number that is going to  be checked
 * Return: +1 if positive -1 if negative and 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
		return ("+1");

	else if (n < 0)
		return ("-1");

	return (0);
}

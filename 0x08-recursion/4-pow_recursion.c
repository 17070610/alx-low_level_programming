#include "main.h"

/**
 * _pow_recursion - Returns teh value of x raise to the power of y
 * @x: The number to be powered
 * @y: The exponent
 * return: The value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}

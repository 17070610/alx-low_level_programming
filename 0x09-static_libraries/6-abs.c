#include "main.h"

/**
 * _abs - Retruns the absolute value of a number
 * @i: the number being checked
 * Return: Always 0
 */

int _abs(int i)
{
	if (i > 0)
		return (i);

	if (i < 0)
		return (-i);

	else
		return (0);
}

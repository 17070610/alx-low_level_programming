#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c - is the value that is going to be checked
 * Return: 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);

	return (0);
}

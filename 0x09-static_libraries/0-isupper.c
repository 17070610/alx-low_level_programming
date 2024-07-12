#include "main.h"

/**
 * _isupper - checks for an uppercase letter
 * @c: The character being checked
 * Return: 1 if an uppercase found otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}

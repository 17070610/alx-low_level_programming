#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: Pointer to the binary string containing 0 and 1 chars
 *
 * Return: The converted number
 *	   0 if the string has any other character not 0 or 1
 *	   0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		decimal = (decimal << 1) + (*b - '0');
		b++;
	}

	return (decimal);
}

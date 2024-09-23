#include "main.h"

/**
 * _strlen - returns the length of a string
 * Return: The length of the string
 * @s: is the string being checked
 */

int _strlen(char *s)
{
	const char *str = s;

	while (*str)
	{
		str++;
	}
	return (str - s);
}

#include "main.h"

/**
 * _isalpha - Checks for an uppercase or lowercase character
 * @c: The character that is bening checked
 * Return: 1 if the character is found otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	return (0);
}

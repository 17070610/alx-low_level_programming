#include "main.h"

/**
 * _strncat - concatenates two strings, using the most n bytes of the src
 * @dest: First string 
 * @src: Second string
 * @n: the number of bytes being checked
 * Return: The pointer to the dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

#include "main.h"

/**
 * _strcat - Concatenates two strings to make one
 * @dest: The first string
 * @src: The second string
 * Return: The string that contains the two strings joined
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];

		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

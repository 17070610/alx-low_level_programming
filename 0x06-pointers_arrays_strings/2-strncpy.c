#include "main.h"

/**
 * _strncpy - copies to n characters from src to dest
 * @dest: destination string
 * @src: Source string
 * @n: number of characters to be copied from src
 * Return: the pointer to dest string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

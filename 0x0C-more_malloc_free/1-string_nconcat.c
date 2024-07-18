#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - Concatenates two strings.
 * @s1: The first string
 * @s2: The second string
 * @n: The number of bytes from s2 to concatenate to s1
 *
 * Return: A pointer to the newly allocated space in memory containing s1
 *	   followed by n bytes from s2.
 *	   Otherwise NULL if it fails
 *	   if NULL is passed for s1 or s2, treat it as an empty string.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, i, j;
	char *concat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);

	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}

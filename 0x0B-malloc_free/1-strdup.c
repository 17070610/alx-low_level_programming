#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns a pointer that points a duplicate to
 * the passed in string
 * @str: The string passed in
 *
 * Return: NULL if the string = NULL or insufficient memory
 * otherwise Retrun the pointer to the duplicate string
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, length = 0;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	dup = (char *)malloc((length + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= length; i++)
		dup[i] = str[i];

	return (dup);
}

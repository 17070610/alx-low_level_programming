#include "main.h"

/**
 * string_toupper - Turns all lowercase characters in a string to uppercase
 * @str: The string to be checked
 * Return: The string in uppercase
 */

char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - ('a' - 'A');
		}
	}
	return(str);
}

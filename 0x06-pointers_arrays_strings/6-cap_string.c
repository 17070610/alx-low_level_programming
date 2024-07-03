#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 * Return: 1 if the character is a separator, 0 otherwise
 */
int is_separator(char c)
{
	char separators[] = " \t\n,;.!?\"(){}";

	for (int i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return 1;
		}
	}
	return 0;
}

/**
 * cap_string - capitalizes all words of a string
 * @str: the string to be modified
 * Return: pointer to the modified string
 */

char *cap_string(char *str)
{
	int i = 0;

	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] = str[i] - 32;
	}

	while (str[i] != '\0')
	{
		if (is_separator(str[i]) && str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}
	return str;
}

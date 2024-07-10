#include "main.h"

/**
 * is_pallindrome - Checks if string is empty or not
 * @s: The string being checked
 * Return: 1 if empty otherwise 0
 */

int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
	return (_is_palindrome_helper(s, start + 1, end - 1));
}

int is_palindrome(char *s)
{
	int len = strlen(s);
	return (_is_palindrome_helper(s, 0, len - 1));
}

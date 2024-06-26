#include "main.h"

/**
 * print_alphabet - Prints alphabets in lowercase
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}

	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets on 10 lines
 * Return - No Return
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int letter;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}

		_putchar('\n');
		i++;
	}
}

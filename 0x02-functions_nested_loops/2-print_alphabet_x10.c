#include "main.h"

/**
 * print_alphabet_x10 - Print alphabets on 10 lines
 * Return - No Return
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int letter = 'a';

	while (i <= 10)
	{
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}

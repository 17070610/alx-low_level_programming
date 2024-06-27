#include "main.h"

/**
 * print_most_numbers - Prints numbers from 0 to 9 except few
 */

void print_most_numbers(void)
{
	int numbers;

	for (numbers = '0'; numbers < '10'; numbers++)
	{
		if (numbers = '2' || numbers = '4')
			continue;
		else
			_putchar(numbers + '0');
	}
	_putchar('\n');
}

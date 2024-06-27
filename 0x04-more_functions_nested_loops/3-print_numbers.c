#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 */

void print_numbers(void)
{
	int numbers;

	for (numbers = 0; numbers < 10; numbers++)
		_putchar(numbers + '0');

	_putchar('\n');
}

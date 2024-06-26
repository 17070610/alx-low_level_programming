#include "main.h"

/**
 * times_table - Prints a times table
 * Return: Always 0
 */

void times_table(void)
{
	int digit, multi, result;

	for (digit = 0; digit < 9; digit++)
	{
		_putchar('0');

		for (multi = 1; multi < 10; multi++)
		{
			_putchar(',');
			_putchar(' ');

			result = multi * digit;
			if (result < 10)
				_putchar(' ');

			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}

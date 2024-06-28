#include "main.h"

/**
 * print_line - Prints lines based on the number passed in
 * @n: the number that is passed in
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}

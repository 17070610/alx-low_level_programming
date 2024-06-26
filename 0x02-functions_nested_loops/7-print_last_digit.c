#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @i: The character that is going to be checked
 * Return: The last digit of the number
 */

int print_last_digit(int i)
{
	int lastdigit = i % 10;

	if (lastdigit < 0)
		lastdigit *= -1;

	_putchar(lastdigit + '0');
	return (lastdigit);
}

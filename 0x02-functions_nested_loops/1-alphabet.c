#include "main.h"

/**
 * main - check code
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

int main(void)
{
	print_alphabet();
	return (0);
}
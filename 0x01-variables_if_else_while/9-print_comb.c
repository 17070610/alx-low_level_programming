#include <stdio.h>

/**
 * main - Prints combinations of single-digit numbers.
 * Return: Alwaays 0
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

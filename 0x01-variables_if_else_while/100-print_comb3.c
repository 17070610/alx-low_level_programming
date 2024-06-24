#include <stdio.h>

/**
 * main - Prints all double digits numbers starting from 0.
 * Return: Always 0
 */

int main(void)
{
	int tens;
	int units;

	for (tens = 0; tens < 9; tens++)
	{
		for (units = 0; units < 10; units++)
		{
			putchar(tens + '0');
			putchar(units + '0');
			if (tens != 8 || units != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}

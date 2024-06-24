#include <stdio.h>

/**
 * main - Prints all possible combinations of 3 digits in ascending order
 * Return: Always 0
 */

int main(void)
{
	int hundreds;
	int tens;
	int ones;

	for (hundreds = 0; hundreds < 10; hundreds++)
	{
		for (tens = 0; tens < 10; tens++)
		{
			for (ones = 0; ones < 10; ones++)
			{
				if (hundreds >= tens || tens >= ones)
				{
					continue;
				}
				putchar(hundreds + '0');
				putchar(tens + '0');
				putchar(ones + '0');

				if (!(hundreds == 7 && tens == 8 && ones == 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

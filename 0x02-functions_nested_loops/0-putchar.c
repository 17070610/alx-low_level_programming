#include <main.h>

/**
 * main - prints _putchar as a text
 * Return: Always 0
 */

int main(void)
{
	char school[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(school[i]);
	}

	_putchar('\n');

	return (0);
}

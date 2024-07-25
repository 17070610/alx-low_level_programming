#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Returns sum of a and b
 * @a: Th first int
 * @b: The second int
 *
 * Return: The sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns the difference between a and b
 * @a: The first int
 * @b: The second int
 *
 * Return: The difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Retruns the product of a and b
 * @a: The first int
 * @b: The second int
 *
 * Return: The product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Returns the quotient of a and b
 * @a: The first int
 * @b: The second int
 *
 * Return: The quotient of a and b or NULL if b == 0
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Returns the modulus between a and b
 * @a: The first int
 * @b: The second int
 *
 * Return: The modulus of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

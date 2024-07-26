#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all it's parameters
 * @n: The first parameter
 *
 * Return: The sum of all parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum = 0;

	va_start(ap, n);
	for (i = n; i != 0; i = va_arg(ap, unsigned int))
		return (sum += i);
	va_end(ap);
	return (0);
}

#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name using a provided function
 * @name: The name to be printed
 * @f: Apointer to the function that prints a name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}

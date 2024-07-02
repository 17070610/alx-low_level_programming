#include "main.h"

/**
 * swap_int - Swaps the values of two intergers
 * @a: The pointer passed in
 * @b: The pointer passed in
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

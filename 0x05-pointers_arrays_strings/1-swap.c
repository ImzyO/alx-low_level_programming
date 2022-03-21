#include "main.h"

/**
 * swap_int - swaps the value of two integers
 * @a: value of a
 * @b: value of b
 */

void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

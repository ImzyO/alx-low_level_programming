#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index starting from 0 of the bit you want to set
 * @n: pointer
 *
 * Return: 1 if it worked, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	int add;

	if (index > 63)
		return (-1);
	add = 1 << index;
	*n = *n | add;
	return (1);
}

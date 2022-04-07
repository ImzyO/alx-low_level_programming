#include "main.h"
#include <stdlib>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: i
 */

void *malloc_checked(unsigned int b)
{
	int *i;
	
	i = malloc(b);

	if (i == 0)

		exit(98);

	return (i);
}

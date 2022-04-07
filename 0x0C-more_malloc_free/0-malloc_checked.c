#include <stdlib>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory
 *
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	int *i
	
	i = malloc(b);

	if (i == 0)
	{
		exit(98);
	}
	return (i);
}

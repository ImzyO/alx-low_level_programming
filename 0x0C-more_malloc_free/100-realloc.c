#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * realloc - function that reallocates memory using malloc, free
 * @oldsize: number min
 * @new_size: number max
 * @s: array input
 *
 * Return: pointer to new memory
 */

void *_realloc(coid *s, unsigned int old_size, unsigned int new_size)
{
	char *str;
	char *ptr = s;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		str = malloc(new_size);
		return (str);
	}
	str = malloc(new_size);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < old_size; i++)
	{
		*(str + i) = *(ptr + i);
	}
	free(ptr);
	return (str);
}

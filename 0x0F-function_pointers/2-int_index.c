#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @size: number of elements in the array, array
 * @cmp: pointer to the function to be used to compare values
 * @array: array of elements
 *
 * Return: i, index of first element, -1 no match or size is less
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size >= 0 && array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}

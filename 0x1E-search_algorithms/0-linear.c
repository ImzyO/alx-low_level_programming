#include "search_algos.h"

/**
 * linear_search -  a function that searches for a value in an array of integers using the Linear search algorithm
 * using the Linear search algorithm
 * @array:  pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located else value is not present in array or if array is NULL -1
 *
*/

int linear_search(int *array, size_t size, int value)
{
	size_t x;

	if (array == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[x]);
		if (array[x] == value)
			break;
	}
	if (x == size)
		return (-1);
	return (x);
}

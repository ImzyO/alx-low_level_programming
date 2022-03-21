#include "main.h"

/**
 * print_array - print n elements of an array of integers
 * followed by new line
 * @a: Array
 * @n: Number of array
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; n > i; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}

#include "main.h"

/**
 * sqrt_a - returns the natural square root of a number
 * @a: number
 * @b: number of power
 *
 * Return: Always 0 (Success)
 */

int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

/**
 * _sqrt_recursion - recurses to find natural sqrt of number
 * @n: number to calclate square root of
 *
 * Return: square root, -1 otherwise
 */

int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}

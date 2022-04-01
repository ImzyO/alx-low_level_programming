#include "main.h"

/**
 * prime_a - state if integer is prime number or not
 * @a: number to evaluate
 * @b: iterator
 *
 * Return: Always 0 (Success)
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - says if an integer is a prime number or not
 * @n: number to evaluate
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
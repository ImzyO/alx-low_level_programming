#include "main.h"

/**
 * print_last_digit - print last digit of number
 * @n : the int to extract the last digit from
 * Return: 0 or 1
 */

int print_last_digit(int n)
{

	int nv;

	if (n < 0)
		nv = -1 * (n % 10);
	else
		nv = n % 10;

	_putchar(nv + '0');
	return (nv);
}

#include <stdio.h>
#include "main.h"
#include <math.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number to convert to binary
 * not allowed to use arrays, malloc or even % or / operators
 */

void print_binary(unsigned long int n)
{
	if ( n == 0)
	{
		putchar ('0');
		return;
	}
	else if ( n == 1)
	{
		putchar ('1');
		return;
	}
	print_binary(n >> 1);
	putchar('0' + (n & 1));
}

#include "main.h"

/**
 * print_numbers - print numbers 0 to 9, followed by new line
 */

void print_number(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}

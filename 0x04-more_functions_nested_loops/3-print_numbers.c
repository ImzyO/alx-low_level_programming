#include "main.h"

/**
 * print_numbers - print numbers 0 to 9, followed by new lin
 *Return: Always 0 (Success)
 */

void print_number(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

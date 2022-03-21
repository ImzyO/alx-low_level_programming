#include "main.h"

/**
 * _puts - function prints a string followed by new line
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_puts(str[i]);
		i++;
	}
	_putchar('\n');
}

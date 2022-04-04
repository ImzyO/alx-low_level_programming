#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: count of arguments
 * @argv: array with arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;

	(void)argv;
	for (count = 0; count < argc; count++)
	{
		if (count + 1 == argc)
			printf("%i\n", count);
	}
	return (0);
}

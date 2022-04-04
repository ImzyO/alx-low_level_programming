#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments it receives, one argument per line
 * then new line
 * @argc: number of command line arguments
 * @argv: array with program command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

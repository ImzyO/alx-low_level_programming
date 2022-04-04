#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multplies two numbers
 * @argc: number of arguments passed to command line
 * @argv: array with command line arguments
 *
 * Return: result of mul, otherwise print error if there are no
 * two arguments, return 1
 */

int main(int argc, char *argv[])
{
	int mul = 1;

	if (argc == 3)
	{
		mul *= atoi(argv[argc - 2]);
		mul *= atoi(argv[argc - 1]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}

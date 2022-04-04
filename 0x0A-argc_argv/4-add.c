#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive number followed by new line
 * @argc: number of command line arguments
 * @argv: array with command line arguments
 *
 * Return: 0 if no number is passed, symbols with no digits print
 * error, return 1
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!(isdigit(argv[i][j])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
			printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}

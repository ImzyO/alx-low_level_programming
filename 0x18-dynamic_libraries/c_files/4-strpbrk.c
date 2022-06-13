#include "main.h"

/**
 * _strpbrk - searches a string for any set of bytes
 * @s: buffer
 * @accept: buffer 2
 *
 * Return: pointer to s matching a byte in accept, NULL otherwise
 */

char *strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (0);
}

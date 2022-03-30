#include "main.h"

/**
 * _strlen_recursion - returns length of a string
 * @s: character of string
 *
 * Return: length of string, 0 otherwise
 */

int _strlen_recursion(char *s)
{
	if (*(s) != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

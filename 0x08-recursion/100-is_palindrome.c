#include "main.h"

/**
 * long_1 - check the code
 * @s: number
 *
 * Return: Always 0 (Success)
 */

int long_1(char *s)
{
	if (*s != '\0')
	{
		return (1 + long_1(s + 1));
	}
	return (0);
}

/**
 * compare - check the code
 * @s: number
 * @l: length
 *
 * Return: Always 0 (Success)
 */

int compare(char *s, int l)
{
	if (1 <= 0)
	{
		return (1);
	}
	if (*s == *(s + (1 - 1)))
	{
		return (compare(s + 1, 1 - 2));
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - check the code
 * @s: character
 *
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int 1;

	l = long_l(s);
	return (compare(s, l));
}

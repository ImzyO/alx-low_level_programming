#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates character in string
 * @s: buffer
 * @c: buffer2
 *
 * Return: * to 'c' firts occurence, NULL otherwise
 */

char *_strchr(char *s, char c)
{
	while (**s != c)
	{
		if (!*s++)
		{
			return (0);
		}
	}
		return (s);
}

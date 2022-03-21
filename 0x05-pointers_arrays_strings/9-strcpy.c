#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byt
 * @dest: Array
 * @src: Number of array
 * Return:  Always 0 (success)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}

#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: buffer
 * @dest: buffer 2
 * @n: size
 *
 * Return: pointerto dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

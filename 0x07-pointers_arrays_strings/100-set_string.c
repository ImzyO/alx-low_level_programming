#include "main.h"

/**
 * set_string - sets value of pointer to char
 * @s: pointer to pointer we need to set to
 * @to: string to set
 *
 * Return: void
 */

void set_string(char **s, char *to)
{
	*s = to;
}

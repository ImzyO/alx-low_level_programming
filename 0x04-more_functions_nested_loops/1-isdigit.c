#include "main.h"

/**
 * _isdigit - function that cheks for a digit (0 through 9)
 *
 * @c: int to be checked
 *
 * Returns: 1 if c is a digit, 0 otherwise
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

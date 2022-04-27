#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to linked list list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(cons list_t *h)
{
	unsigned int i;

	const list_t *new = h;

	for (i = 0; new; i++)
	{
		new = new->next;
	}
	return (i);
}

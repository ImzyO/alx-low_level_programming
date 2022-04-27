#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to linked list list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

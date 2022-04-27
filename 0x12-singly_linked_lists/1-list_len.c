#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements in a linked list
 * @h: pointer to linked list list_t
 *
 * Return: number of elements in list_t
 */

size_t list_len(cons list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

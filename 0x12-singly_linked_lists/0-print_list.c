#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list
 * @h: pointer of list_t
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}

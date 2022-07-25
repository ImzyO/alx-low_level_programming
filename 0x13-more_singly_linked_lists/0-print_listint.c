#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints elements of a linked list
 * @h: linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t nbr_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr_nodes++;
	}
	return (nbr_nodes);
}

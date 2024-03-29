#include "lists.h"
/**
 * listint_len - counts the number of nodes in a singly linked list
 * @h: the head of the list
 * Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

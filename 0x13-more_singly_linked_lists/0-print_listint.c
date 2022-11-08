#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: head of the linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
        size_t count = 0;
	for (count = 0; h; h = h->next, count++)
		printf("%d\n", h->n);

	return (count);
}

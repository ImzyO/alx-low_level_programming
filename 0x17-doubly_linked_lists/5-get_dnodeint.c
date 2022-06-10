#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 * @head: pointer to beginning of list
 * @index: index of node to be retrieved
 *
 * Return: NULL if node doesnt exist, pointer to indexed node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	if (head == NULL)
		return (0);

	current = head;

	while (index != 0)
	{
		current = current->next;
		index--;
		if (current == NULL)
			return (0); /*Out of range*/
	}

	return (current);
}

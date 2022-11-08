#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_dnodeint_end -  adds a new node at the end of a dlistint_t list
 * @head: double pointer to beginning of a linked list
 * @n: intger value to add
 *
 * Return: address of new element, Null if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *temp = *head;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;

	return (new);
}

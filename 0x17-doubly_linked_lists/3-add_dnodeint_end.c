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
	dlistint_t *current;
	dlistint_t *new_node;

	current = *head;

	while (current && current->next != NULL)
		current = current->next;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = current;

	if (current)
		current->next = new_node;
	else
		*head = new_node;

	return (new_node);
}

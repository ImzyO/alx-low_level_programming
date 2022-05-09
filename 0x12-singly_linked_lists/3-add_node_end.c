#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stdio.h>

/**
 * add_node_end - adds new nodes at end of list_t list
 * @str: string to be duplicated
 * @head: double pointer to list_t
 *
 * Return: address of new element, NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	lis_t *current;
	list_t *new_node;
	int c;

	current = *head;
	while (current && current->next != NULL)
		current = current->next;

	for (c = 0; str[c] != '\0'; c++)
		;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = c;
	new_node->next = NULL;

	if (current)
		current->next = new_node;
	else
		*head = new_node;
	return (new_node);
}

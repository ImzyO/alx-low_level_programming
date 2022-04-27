#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of  astring
 * @s: s is a character
 *
 * Return: value is i
 */

int _strlen(const chhar *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_note - adds a new node at beginning of a list list_t
 * @head: double pointer to list_t
 * @str: string to be duplicated
 *
 * Return: address of new element, NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL)
			add->str = strdup(str);

	add->str = _strlen(str);
	add->next = *head;
	*head = add;

	return (add);
}

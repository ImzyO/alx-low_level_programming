#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a singly linked list
 * @head: pointer of the head of the list
 * @n: the int data of the new node
 * Return: the address of the new node, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
     listint_t *new_node;
	listint_t *trav = *head;

	/* create new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	/* if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* traverse list to the end */
	while (trav->next != NULL)
		trav = trav->next;

	trav->next = new_node;

	return (new_node);
}

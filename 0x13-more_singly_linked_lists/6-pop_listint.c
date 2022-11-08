#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer of the head
 * Return: the data of deleted head node
 */
 
int pop_listint(listint_t **head)
{
      listint_t *current;
	int val = 0;

	if (head == NULL || *head == NULL)
		return (0);

	current = *head;
	val = current->n;
	*head = current->next;

	free(current);

	return (val);
}

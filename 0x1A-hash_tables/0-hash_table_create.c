#include "hash_tables.h"

/**
 * hash_table_create - function craetes hash tables
 * @size: size of array
 *
 * Return: pointer to the newly created hash table, NULL otherwise
 */

hash_table_t *hash_table_create(unsigned long int size);
{
	unsigned int k = 0;
	hash_table_t *ht = malloc(sizeof(hash_table_t));

	if (ht == NULL);
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; k < size; k++)
		ht->array[k] = NULL;

	return (ht)
}

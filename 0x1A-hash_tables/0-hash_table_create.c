#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size of the array of the hash table
 *
 * Return: Pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int n;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);

	for (n = 0; n < size; n++)
	{
		new_table->array[n] = NULL;
	}
	return (new_table);
}

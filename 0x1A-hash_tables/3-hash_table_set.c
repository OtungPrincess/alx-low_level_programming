#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function that adds an element to a hash table
 *
 * @ht: the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: value associated with the key.
 *	value must be duplicated.
 *	value can be an empty string
 * Return: 1 if it succeeded, 0 otherwise
 * In case of collision, add the new node at the beginning of the list
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index;

	if (key == NULL || *key == '\0' || value == NULL || ht == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];
	while (new_node)
	{
		if (!strcmp(new_node->key, key))
		{
			free(new_node->value);
			new_node->value = strdup(value);
			if (new_node->value == NULL)
				return (0);
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = ht->array[index];
	ht->array[index] = malloc(sizeof(hash_node_t));
	if (ht->array[index] == NULL)
		return (0);
	ht->array[index]->key = strdup(key);
	if (ht->array[index]->key == NULL)
	{
		free(ht->array[index]);
		return (0);
	}
	ht->array[index]->value = strdup(value);
	if (ht->array[index]->value == NULL)
	{
		free(ht->array[index]);
		return (0);
	}
	ht->array[index]->next = new_node;
	return (1);
}

#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *aux = NULL;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	aux = (ht->array)[index];

	while (aux)
	{
		if (!strcmp(aux->key, (char *)key))
			return (aux->value);
		aux = aux->next;
	}

	return (NULL);
}

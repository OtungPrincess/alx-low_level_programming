#include "hash_tables.h"
/**
 * hash_table_print -function that prints a hash table.
 * @ht: hash table.
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	unsigned long int ver;
	hash_node_t *t = NULL;

if (ht == NULL)
return;

	printf("{");
	for (ver = 0; ver < ht->size; ver++)
	{
	while (t != NULL)
	{
		if (i == 1)
		printf(", ");
		printf("'%s': '%s'", t->key, t->value);
	i = 1;
	t = t->next;
	}
	t = ht->array[ver];
	}
printf("}\n");
}

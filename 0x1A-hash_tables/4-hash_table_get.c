#include "hash_tables.h"

/**
 * hash_table_get - Gets the value associated with a key in a hash table
 * @ht: The pointer to the hash_table
 * @key: The key to search for
 *
 * Return: Null if the key is not found else, the value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (current_node = ht->array[index];
	     current_node && strcmp(current_node->key, key) != 0;
	     current_node = current_node->next)
		;
	if (!current_node)
	{
		return (NULL);
	}
	else
	{
		return (current_node->value);
	}
}

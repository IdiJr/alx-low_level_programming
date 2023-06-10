#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The pointer to the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	bool flag = false;

	if (ht == NULL)
		return;

	printf("{");
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (flag == true)
				printf(", ");

			current_node = ht->array[i];
			while (current_node != NULL)
			{
				printf("'%s': '%s'", current_node->key,
				       current_node->value);
				current_node = current_node->next;
				if (current_node != NULL)
					printf(", ");
			}
			flag = true;
		}
		i++;
	}
	printf("}\n");
}

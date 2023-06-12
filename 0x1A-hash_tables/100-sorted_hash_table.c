#include "hash_tables.h"

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the hash table array
 * Return: Null on error else, a pointer to a new hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; ++i)
	{
		ht->array[i] = NULL;
	}
	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: The key to be added
 * @value: Value of the key
 * Return: 0 on failure, 1 on success
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *copy_val;
	shash_node_t *new_node, *tmp;

	if (ht == NULL || key == NULL || *key == 48 || value == NULL)
		return (0);

	copy_val = strdup(value);
	if (copy_val == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->shead; tmp != NULL; tmp = tmp->snext)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = copy_val;
			return (1);
		}
	}
	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	{
		free(copy_val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(copy_val);
		free(new_node);
		return (0);
	}
	new_node->value = copy_val;
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL)
	{
		new_node->sprev = NULL;
		new_node->snext = NULL;
		ht->shead = new_node;
		ht->stail = new_node;
	}
	else if (strcmp(ht->shead->key, key) > 0)
	{
		new_node->sprev = NULL;
		new_node->snext = ht->shead;
		ht->shead->sprev = new_node;
		ht->shead = new_node;
	}
	else
	{
		for(tmp = ht->shead;
		    tmp->snext != NULL && strcmp(tmp->snext->key, key) < 0;
		tmp = tmp->snext)
		;
		new_node->sprev = tmp;
		new_node->snext = tmp->snext;
		if (tmp->snext == NULL)
			ht->stail = new_node;
		else
			tmp->snext->sprev = new_node;
		tmp->snext = new_node;
	}
	return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in the sorted hash table.
 * @ht: Pointer to the sorted hash table
 * @key: The key to search for
 * Return: Null if the key is not found else, the value of the key
 */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || *key == 48 || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	for (current_node = ht->shead;
	     current_node != NULL && strcmp(current_node->key, key) != 0;
	     current_node = current_node->snext)
		;
	if (current_node == NULL)
	{
		return (NULL);
	}
	else
	{
		return (current_node->value);
	}
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: Pointer to the sorted hash_table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (current_node = ht->shead; current_node != NULL;
	     current_node = current_node->snext)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse
 * @ht: Pointer to the sorted hash_table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
		return;

	printf("{");
	for (current_node = ht->stail; current_node != NULL;
	     current_node = current_node->sprev)
	{
		printf("'%s': '%s'", current_node->key, current_node->value);
		if (current_node != NULL)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table
 * @ht: Pointer to the sorted hash_tabe
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_table_t *head = ht;
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node != 0; node = temp)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}
	free(head->array);
	free(head);
}

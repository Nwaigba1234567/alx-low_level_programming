#include "hash_tables.h"
/**
 * hash_table_create - create hash table given size
 * @size: size
 * Return: pointer to table; NULL if error
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;

	hash_table_t *hash_table;
	hash_node_t **array;

	hash_table = malloc(sizeof(hash_table_t));
	if (size == 0)
		return (NULL);

	if (!hash_table)
		return (NULL);
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hash_table);
		return (NULL);
	}
	while (i < size)
	{
		array[i] = NULL;
		i++;
	}

	hash_table->size = size;
	hash_table->array = array;

	return (hash_table);
}

#include "hash_tables.h"
/**
 * key_index - Determines the index in the hash table's array where a key/value
 * pair should be stored.
 * @key: The key for which the index is calculated.
 * @size: The size of the hash table's array.
 *
 * Return: The calculated index for the given key.
 * Description: Utilizes the djb2 algorithm to generate the hash value.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

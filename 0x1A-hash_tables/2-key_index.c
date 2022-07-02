#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: key
 * @size: size of array of hash table
 *
 * Return: index at whick key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int find_idx;

	find_idx = hash_djb2(key);
	return (find_idx % size);
}

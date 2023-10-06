#include "hash_tables.h"

/**
 * key_index - Get the index at which a key
 *      pair should be stored in an array of a hash table.
 * @key: key to get the index of.
 * @size: size of an array of the hash table.
 *
 * Return: the index of the key.
 * Description: Uses the djb2 algorithm.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

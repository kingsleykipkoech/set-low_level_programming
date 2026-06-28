# C - Hash Tables

This repository contains the implementation of a hash table data structure in C using chaining for collision handling (specifically, insertion at the head of the linked list). It implements the djb2 hashing algorithm.

## Data Structures

```c
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;
```

## Functions Implemented

- `hash_table_t *hash_table_create(unsigned long int size)`: Creates a hash table of a given size.
- `unsigned long int hash_djb2(const unsigned char *str)`: Hashing function implementing the djb2 algorithm.
- `unsigned long int key_index(const unsigned char *key, unsigned long int size)`: Retrieves the array index of a key.
- `int hash_table_set(hash_table_t *ht, const char *key, const char *value)`: Adds or updates an element in the hash table.
- `char *hash_table_get(const hash_table_t *ht, const char *key)`: Retrieves a value associated with a key.
- `void hash_table_print(const hash_table_t *ht)`: Prints a hash table in a Python-like dictionary format.
- `void hash_table_delete(hash_table_t *ht)`: Deletes a hash table and frees all allocated memory.

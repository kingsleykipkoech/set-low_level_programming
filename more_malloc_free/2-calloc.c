#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and zeroes it out
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Description: Allocates memory for an array of nmemb elements
 *              of size bytes each. The memory is set to zero.
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < total; i++)
		ptr[i] = 0;

	return (ptr);
}

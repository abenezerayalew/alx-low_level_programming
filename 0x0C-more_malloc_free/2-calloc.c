#include <stdlib.h>

/**
 * *_calloc - a function that allocates memory for an array
 * @nmemb: array length
 * @size: size of each element
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
/*	_memset(m, 0, nmemb * size);*/

	return (ptr);
}

#include <stdlib.h>
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to put the constant
 * @b: constant
 * @n: max bytes to use
 * Return: A pointer to the filled memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *pr = s;

	while (n--)
		*s++ = b;
	return (pr);
}

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

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (NULL);
	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

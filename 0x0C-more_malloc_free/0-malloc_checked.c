#include <stdlib.h>

/**
 * *malloc_checked - a function that allocates memory using malloc
 *
 * @b: amount of size *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ml = malloc(b);

	if (ml == NULL)
		exit(98);
	return (ml);
}

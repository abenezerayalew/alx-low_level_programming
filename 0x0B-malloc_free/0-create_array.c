#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: char to initialize array with
 *
 * Return: array @a
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

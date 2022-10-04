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
	char *s = malloc(sizeof(char) * size);

	if (size == 0 || s == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}

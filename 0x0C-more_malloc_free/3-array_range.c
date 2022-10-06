#include <stdlib.h>

/**
 * *array_range - a function that creates an array of intergers
 *
 * @min: min number of values
 * @max: max number of values
 *
 * Return: array pointer address
 *		NULL if it fails
 */
int *array_range(int min, int max)
{
	int i, *value;

	if (min > max)
		return (NULL);
	value = malloc((max - min + 1) * sizeof(int));
	if (value == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		value[i] = min;
		min++;
	}
	return (value);
}

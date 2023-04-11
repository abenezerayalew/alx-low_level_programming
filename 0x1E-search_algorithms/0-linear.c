#include "search_algos.h"

/**
* linear_search - searches for a value in a array.
*
* Description: linear_search function for a value in an array of
* integers using the Linear search algorithm.
*
* @array: A pointer of the array
* @size: The num of elements in the array
* @value: The value to search form array
* Return: if a match is not found return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	int found;

	if (array == NULL)
		return (-1);
	index = 0;
	found = 0;

	do {
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			found = 1;
			return (index);
		}
		else
			index++;
	} while (found == 0 && index < size);
	if (found == 0)
		index = -1;
	return (index);
}

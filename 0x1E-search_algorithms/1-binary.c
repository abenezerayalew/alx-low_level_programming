#include "search_algos.h"

/**
* binary_search - searches for a value in a array.
*
* Description: binary searchfunction for a value in an array of
* integers using the binary search algorithm.
*
* @array: A pointer of the array
* @size: The num of elements in the array
* @value: The value to search form array
* Return: if a match is not found return -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;
	int found = 0;
	int index;

	if (array == NULL)
		return (-1);
	do {
		printf("Searching in array: ");
		for (mid = left; mid < right; mid++)
			printf("%d, ", array[mid]);
		printf("%d\n", array[mid]);

		mid = (left + right) / 2;

		if (value == array[mid])
			found = 1;
		else
			if (value < array[mid])
				right = mid - 1;
			else
				left = mid + 1;
	} while (found == 0 && left < right);
	if (found == 0)
		index = -1;
	else
		index = mid;
	return (index);
}

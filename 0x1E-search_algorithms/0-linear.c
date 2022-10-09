#include "search_algos.h"

/**
 * linear_search - seach value in an array using a linear search.
 * @array: pointer to the first element of the array to search in.
 * @size: length/number of elements the array
 * @value: value to search for
 *
 * Return: first index of the value in the array, otherwise -1.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, *(array + i));
		}
	}
	return (-1);
}

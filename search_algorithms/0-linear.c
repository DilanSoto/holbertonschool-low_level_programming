#include "search_algos.h"
#include <stdio.h>

/**
* linear_search - Searches for a value in an array of integers using
*                 the Linear search algorithm.
* @array: A pointer to the first element of the array to search in.
* @size: The number of elements in the array.
* @value: The value to search for.
*
* Return: The first index where the value is located, or -1 if the
*         value is not present or the array is NULL.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return ((int)i);
		}
	}

	return (-1);
}

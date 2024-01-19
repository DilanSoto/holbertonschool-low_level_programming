#include <stdio.h>
#include "search_algos.h"

/**
* print_array - Prints an array of integers
*
* @array: The array to be printed
* @left: Index of the first element in the array to print
* @right: Index of the last element in the array to print
*/
void print_array(const int *array, size_t left, size_t right)
{

	printf("Searching in array: ");
	for (size_t i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
* binary_search - Searches for a value in a sorted array of integers
*                 using the Binary search algorithm
*
* @array: Pointer to the first element of the array to search in
* @size: Number of elements in array
* @value: The value to search for
* Return: The index where value is located
*/
int binary_search(int *array, size_t size, int value)
{

	if (array == NULL)
	{
		return (-1);
	}

	size_t left = 0;
	size_t right = size - 1;
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		} else if (array[mid] < value)
		{
			left = mid + 1;
		} else
		{
			right = mid - 1;
		}
	}

	return (-1);
}

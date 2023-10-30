#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two diagnals
 * @a: string
 * @size: integer
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0;
	int sum1 = 0;

	for (i = 0; i < size; i++)
	{
		sum += *((a + i * size) +  i);
		sum1 += *((a + i * size) + (size - i - 1));
	}
	printf("%d, %d\n", sum, sum1);
}

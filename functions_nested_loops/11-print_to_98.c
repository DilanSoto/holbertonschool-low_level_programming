#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural nuumbers from n to 98
 * @n: number to checked
 * Return: void
 */
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
	else if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}

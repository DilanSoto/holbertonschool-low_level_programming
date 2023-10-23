#include "main.h"
/**
 * print_triangle - function that prints a triangle.
 * @size: is the size of the trangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int w;
	int h;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 1; h <= size; h++)
	{
		for (w = 1; w <= size; w++)
		{
			if ((size - h) >= w)
			{
				_putchar(' ');

			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}

}

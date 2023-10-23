#include "main.h"
/**
 * print_square - function that prints a square.
 * @size: is the size of the square.
 *
 * Return: void.
 */
void print_square(int size)
{
	int width;
	int height;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

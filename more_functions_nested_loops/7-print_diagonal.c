#include "main.h"
/**
 * print_diagonal - functions that draws a diagonal line.
 * @n: is the number of tomes the character \ should be printed.
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		_putchar(92);
		_putchar('\n');

		if (i < (n - 1))
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
		}
	}
}

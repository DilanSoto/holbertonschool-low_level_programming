#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
 * Return: void.
 */
void _puts(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}

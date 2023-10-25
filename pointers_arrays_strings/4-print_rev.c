#include <stdio.h>
#include "main.h"

/**
 * print_rev - Prints a string in reverse followed by a new line.
 * @s: The string to be reversed and printed.
 * Return: void
 */
void print_rev(char *s)
{
	int m;

	m = 0;

	while (s[m] != '\0')
	{
		m++;
	}

	for (m -= 1; m >= 0; m--)
	{
		putchar(s[m]);
	}
	putchar('\n');
}


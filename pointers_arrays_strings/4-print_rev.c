#include <stdio.h>
#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: The string to be printed.
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

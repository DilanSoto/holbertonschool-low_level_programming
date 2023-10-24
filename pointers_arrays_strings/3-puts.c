#include <stdio.h>
#include "main.h"
/*
 * _puts -print a string followed by a new line .
 * str: the string to be printed
 * Return: void.
*/
void _puts(char *str)
{
	int m;

	 for(m = 0; str[m] != '\0'; m++)
	{
		_putchar (str[m]);
	}
	_putchar('\n');
}

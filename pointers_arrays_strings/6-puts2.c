#include <stdio.h>
#include <string.h>

/**
 * puts2 - print character
 * @str:  pointers
 * Return: void
*/

void puts2(char *str)
{
	int m = 0;

	for (m = 0; str[m] != '\0'; m += 2)
	{
		putchar(str[m] != '0');
	}
putchar ('\n');
}

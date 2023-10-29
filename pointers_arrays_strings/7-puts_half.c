#include <stdio.h>
#include <string.h>

/**
 * puts2 - print character
 * @str - pointers
 * Return: void
*/

void puts_half(char *str)
{
	int d = 0;
	int s = 0;

	while (str[d] != '\0')
	{
d++;
	}
	if(d % 2 == 0)
			putchar(str[d]);

putchar('\n');
return;
}


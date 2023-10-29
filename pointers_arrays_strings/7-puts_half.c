#include <stdio.h>
#include <string.h>

/**
 * puts_half - print character
 * @str: pointers
*/

void puts_half(char *str)
{
	int n, len;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			putchar(str[n + 1]);
		}
	}
	else if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			putchar(str[n]);

		}
	}
	putchar('\n');
}

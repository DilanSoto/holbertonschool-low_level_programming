#include <stdio.h>
#include <string.h>

/**
 * puts2 - print character
 * @str - pointers
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
			_putchar(str[n + 1]);
		}
	}
	else if (len % 2 == 0)
	{
		for (n = len / 2; str[n] != '\0'; n++)
		{
			_putchar(str[n]);

		}
	}
	_putchar('\n');
}

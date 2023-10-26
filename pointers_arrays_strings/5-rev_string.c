#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * @s: pointer to the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int start, finish, center;

	start = 0;
	finish = -1;
	center = 0;

	while (s[start] != '\0')
	{
		start++;
	}
	finish = start - 1;

	for (center = 0; center < start / 2; center++)
	{
		tmp = s[center];
		s[center] = s[finish];
		s[finish--] = tmp;
	}
}

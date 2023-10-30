#include "main.h"
#include <string.h>
/**
 * _strspn - a function that gets the length of a prefix substring.
 * @s: string to be check
 * @accept: prefix substring
 * Return: the number of bytes in initial segment of s.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s)
	{
		char *ptr = accept;
		int found = 0;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				found = 1;
				break;
			}
			ptr++;
		}
		if (!found)
			break;
		len++;
		s++;
	}
	return (len);
}

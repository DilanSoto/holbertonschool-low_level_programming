#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - a function that searches a string
 * @s: string to be search
 * @accept: string to be match
 * Return: a pointer to the byte in s that matches
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *ptr = accept;

		while (*ptr)
		{
			if (*s == *ptr)
			{
				return (s);
			}
			ptr++;
		}
		s++;
	}
	return (NULL);
}

#include "main.h"
#include <string.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: string
 * @needle: string
 * Return: a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_len = strlen(needle);

	while (*haystack)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

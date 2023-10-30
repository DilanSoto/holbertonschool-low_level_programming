#include "main.h"
/**
 * _memcpy - a function that copies memory area.
 * @dest: string to be edited.
 * @src: string to be copy.
 * @n: length of space to be copy.
 * Return: a pointer of the copied string.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (tmp);
}

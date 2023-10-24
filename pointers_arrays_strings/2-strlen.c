#include "main.h"
#include <string.h>
/**
 * main - check the code
 * @s is the pointer
 * strlen the function i use
 * Return: the # of char length
 */
int _strlen(char *s)
{
	int length;
	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

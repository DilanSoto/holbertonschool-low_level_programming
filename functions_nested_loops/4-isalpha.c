#include "main.h"
/**
 * _isalpha - Checks if c is a alpha
 * @c: character to be checked.
 * Return: 0 or 1.
 */
int _isalpha(int c)
{
	/* A-Z 65-90 | a-z 97-122 */
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

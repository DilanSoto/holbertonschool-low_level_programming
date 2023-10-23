#include "main.h"
/**
 * _islower - Checks if c is lower case.
 * @c: This is the character to be checked.
 *
 * Return: 1 or 0.
 */
int _islower(int c)
{
	if (c == 0)
	{
		return (0);
	}
	else if (c == 20)
	{
		return (0);
	}
	else if (c < 65 || c > 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

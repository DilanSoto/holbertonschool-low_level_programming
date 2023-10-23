#include "main.h"
/**
 * _isdigit - functions that checks for a digit ( 0 through 9)
 * @c: digit t obe checked.
 *
 * Return: 1 if it's a number otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1); /* Successful */
	}
	else
	{
		return (0);
	}

}

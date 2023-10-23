#include "main.h"
/**
 * _abs - function that computes the absolute value of an integer.
 * @n: number to be checked.
 * Return: the absolute value of a number.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}

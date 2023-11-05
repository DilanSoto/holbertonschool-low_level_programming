#include "main.h"
/**
 * factorial - a function that calculates the factorial of n
 * @n: number to be calculated
 * Return: the product of a factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}

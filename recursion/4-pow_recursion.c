#include "main.h"
/**
 * _pow_recursion - a function that calculated the power x raised by y
 * @x: value to be raised
 * @y: the power to be raised
 * Return: the product of the x raised by the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}

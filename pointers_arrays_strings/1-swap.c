#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: holds the memory address
 * @b: holds the memory address
 * Return: void
 */
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

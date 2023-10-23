#include "main.h"
/**
 * print_alphabet - print the alphabet
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ds;

	for (ds = 'a'; ds <= 'z'; ds++)
	{
		_putchar(ds);
	}
	_putchar('\n');
}

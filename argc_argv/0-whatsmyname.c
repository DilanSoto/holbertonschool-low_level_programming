#include <stdio.h>
#include "main.h"
/**
 * main - Entry Point
 * @argc: the count of arguments
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	whatsmyname(argv, argc - 1);
	return (0);
}
/**
 * whatsmyname - a function that prints the executable's name.
 * @s: array of string.
 * @c: index where name is.
 */
void whatsmyname(char **s, int c)
{
	printf("%s\n", s[c]);
}

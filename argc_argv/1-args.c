#include "main.h"
#include <stdio.h>
/**
 * main - Entry Point
 * @argc: count of arguments
 * @argv: array of strings.
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	(void)argv;
	print_args(argc - 1);
	return (0);
}
/**
 * print_args - a function that print the count of arguments
 * @c : number of arguments.
 */
void print_args(int c)
{
	printf("%d\n", c);
}

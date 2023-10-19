#include <stdio.h>
/**
* main - Entry Point
*
* return: Always 0 (Success)
*/
int main(void)
{
	char letras;

	for (letras = 'a'; letras <= 'z'; letras++)
	{
	putchar(letras);
	}
	for (letras = 'A'; letras <= 'Z'; letras++)
	{
	putchar(letras);
	}
	putchar('\n');
return (0);
}

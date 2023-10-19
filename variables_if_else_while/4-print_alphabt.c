#include <stdio.h>
/**
* main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char ds;

	for (ds = 'a'; ds <= 'z'; ds++)
	{
		if (ds != 'q' && ds != 'e')
		{
		 putchar(ds);
		}
	}
	putchar('\n');
return(0);
}

#include "main.h"
/**
 * jack_bauer - functions that prints every minute of the day of Jack Bauer
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hl;
	int hr;
	int ml;
	int mr;

	/*For each hour 60 minutes*/
	for (hl = 0; hl <= 2; hl++)
	{
		for (hr = 0; hr <= 9; hr++)
		{
			if (hl == 2 && hr == 4)
			{
				break;
			}
			for (ml = 0; ml <= 5; ml++)
			{
				for (mr = 0; mr <= 9; mr++)
				{
					_putchar(hl + '0');
					_putchar(hr + '0');
					_putchar(':');
					_putchar(ml + '0');
					_putchar(mr + '0');
					_putchar('\n');
				}
			}
		}
	}
}

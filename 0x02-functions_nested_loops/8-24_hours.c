#include <stdio.h>
#include "main.h"
/**
 * jack_bauer- Returns the absolute of a number
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int one, two, three, four;

	for (i = 0; i < 3; i++)
	{
		one = '0' + i;
		for (j = 0; j <= 9 && ((i * 10) + j) < 24; j++)
		{
			two = '0' + j;
			for (k = 0; k < 6; k++)
			{
				three = '0' + k;
				for (l = 0; l <= 9; l++)
				{
					four = '0' + l;

					_putchar(one);
					_putchar(two);
					_putchar(':');
					_putchar(three);
					_putchar(four);
					_putchar('\n');
				}
			}
		}
	}

}

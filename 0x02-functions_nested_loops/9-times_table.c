#include <stdio.h>
#include "main.h"

#define ROW_COUNT 10
#define COL_COUNT 10
/**
 * times_table - Prints 9 * 9 table with leading zeros
 * Return: void
 */
void times_table(void)
{
	int row, col;
	int value;
	int tens, ones;

	for (row = 0; row < ROW_COUNT; row++)
		for (col = 0; col < COL_COUNT; col++)
		{
			tens = 0;
			value = row * col;
			ones = value % 10;

			if (value > ones)
				tens = value / 10;

			if (tens == 0)
			{
				if (col != 0)
					_putchar(' ');
				_putchar('0' + ones);
			}
			else
			{
				_putchar('0' + tens);
				_putchar('0' + ones);
			}

			if (col == 9)
				_putchar('\n');
			else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
}

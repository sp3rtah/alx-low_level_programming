#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints 9 * 9 table with leading zeros
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int i, spaces, row, col, row_count, col_count;

	if (n < 0 || n > 15)
		return;
	if (n == 0)
	{
		printf("%d\n", 0);
		return;
	}
	row_count = col_count = n + 1;
	for (row = 0; row < row_count; row++)
		for (col = 0; col < col_count; col++)
		{
			if (col == 0)
			{
				printf("%d,", 0);
				continue;
			}
			spaces = 1;
			if ((row * col) < 10)
			{
				if (col != 0)
					spaces = 3;
			}
			else if ((row * col) < 100)
			{
				if (col != 0)
					spaces = 2;
			}

			for (i = 0; i < spaces; i++)
				printf(" ");
			if (col != n)
				printf("%d,", (row * col));
			else
				printf("%d", (row * col));
			if (col == n)
				printf("\n");

		}
}

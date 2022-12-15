#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: int
 */
void print_diagonal(int n)
{
	int j;
	int spaces;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	spaces = 0;
	for (; n > 0; n--)
	{
		for (j = 0; j < spaces; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		++spaces;
	}
}

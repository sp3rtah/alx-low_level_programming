#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: int
 */
void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

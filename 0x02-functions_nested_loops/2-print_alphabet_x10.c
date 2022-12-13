#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet ten times
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, count;

	count = 10;

	while (count)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		--count;
	}
}

#include <stdio.h>
#include "main.h"
/**
 * times_table - Prints 9 * 9 table with leading zeros
 * Return: void
 */
void times_table(void)
{
	int i;
	int nums[10];

	for (i = 0; i < 10; i++)
		nums[i] = i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + nums[i]);
		_putchar(',');
		_putchar(' ');
	}
}

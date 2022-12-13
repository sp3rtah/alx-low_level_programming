#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - Returns the absolute of a number
 * @n: number
 * Return: int
 */
int print_last_digit(int n)
{
	long intern;

	intern = n;
	if (intern < 0)
		intern *= -1;

	intern %= 10;
	_putchar('0' + intern);
	return (intern);
}

#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int count, i;
	int ones, tens;

	count = 10;

	while (count--)
	{
		for (i = 0; i <= 14; i++)
		{
			tens = 0;
			ones = i % 10;

			if (i > ones)
				tens = i / 10;
			if (tens)
				_putchar('0' + tens);
			_putchar('0' + ones);
		}
		_putchar('\n');
	}
}

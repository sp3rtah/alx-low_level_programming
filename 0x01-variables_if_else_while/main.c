#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int i, j;
	int end;
	int one, two, three, four;

	end = 0;
	for (i = 0; i < 100; i++)
	{
		one = 0;
		two = i % 10;
		if (i > two)
			one = i / 10;

		for (j = 0; j < 100; j++)
		{
			three = 0;
			four = j % 10;
			if (j > four)
				three = i / 10;
			if ((one * 10 + two) < (three * 10 + four))
			{
				putchar('0' + one);
				putchar('0' + two);
				putchar(' ');
				putchar('0' + three);
				putchar('0' + four);

				++end;
				if (end != 4095)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	printf("\nend: %d\n", end);
	return (0);
}

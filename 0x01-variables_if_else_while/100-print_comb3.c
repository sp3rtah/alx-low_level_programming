#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int i;
	int j;
	int end;

	end = 45;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
		{
			if (i < j)
			{
				putchar('0' + i);
				putchar('0' + j);

				--end;
				if (end)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	putchar('\n');
	return (0);
}

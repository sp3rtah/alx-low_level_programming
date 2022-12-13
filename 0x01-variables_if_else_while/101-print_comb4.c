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
	int k;
	int end;

	end = 120;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
			{
				if (i < j && j < k)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar('0' + k);

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

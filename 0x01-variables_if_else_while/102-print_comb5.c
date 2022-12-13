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
	int k, l;
	int end;

	end = 0;

	for (i = 0; i <= 9; i++)
		for (j = 0; j <= 9; j++)
			for (k = 0; k <= 9; k++)
				for (l = 0; l <= 9; l++)
				{
					if (i + j >= k + l)
						continue;
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);

					end++;
					if (end != 4665)
					{
						putchar(',');
						putchar(' ');
					}
				}
	putchar('\n');
	return (0);
}

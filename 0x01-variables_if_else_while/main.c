#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include <stdbool.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	struct printed
	{
		int a;
		int b;
	} printed[100];

	int a, b;
	int i, j, k;
	bool skip;
	int total, count;
	int loop_count;
	const int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	total = 0;
	count = sizeof(nums) / sizeof(int);

	for (i = 0; i < count; i++)
		for (j = 0; j < count; j++)
		{
			a = nums[i];
			b = nums[j];

			skip = false;

			if (a == b)
				continue;

			for (k = 0; k < total; k++)
			{
				if (a == printed[k].a)
					if (b == printed[k].b)
						skip = true;

				if (a == printed[k].b)
					if (b == printed[k].a)
						skip = true;
			}

			if (skip)
				continue;

			printed[total].a = a;
			printed[total].b = b;
			++total;
		}
	loop_count = 0;

	for (i = 0; i < total; i++)
	{
		putchar(printed[i].a);
		putchar(printed[i].b);

		if (loop_count!= total - 1)
		{
			putchar(',');
			putchar(' ');
		}
		loop_count++;
	}
	putchar('\n');
	return (0);
}

#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdbool.h>
#include "./typedefs.h"

/**
 * show_permutation - Print results of the permutaion
 * @printed: array of structs
 * @total: Total items in struct above
 * Return: void
 */
void show_permutation(printer *printed, int total)
{
	int i;
	int loop_count;

	loop_count = 0;
	for (i = 0; i < total; i++)
	{
		putchar(printed[i].a);
		putchar(printed[i].b);

		if (loop_count != total - 1)
		{
			putchar(',');
			putchar(' ');
		}
		loop_count++;
	}
	putchar('\n');
}

/**
 * permutate - Creates a collection of the required parmutations
 * @printed: array of structures to be printed
 * @total: number of items in array of structues
 * Return: void
 */
void permutate(printer *printed, int *total)
{
	bool skip;
	int count;
	int a, b, i, j, k;
	int nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

	*total = 0;
	count = sizeof(nums) / sizeof(int);

	for (i = 0; i < count; i++)
		for (j = 0; j < count; j++)
		{
			skip = false;
			a = nums[i];
			b = nums[j];
			if (a == b)
				continue;
			for (k = 0; k < *total; k++)
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
			printed[*total].a = a;
			printed[*total].b = b;
			++(*total);
		}
}
/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int total;
	size_t size;
	printer *printed;

	total = 0;
	size = sizeof(printer) * 100;
	printed = malloc(size);

	permutate(printed, &total);
	show_permutation(printed, total);
	return (0);
}

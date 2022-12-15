#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

/**
 * print_large_int - Prints a large integer stored in a char array
 * @a: char array
 * @len_a: length of array
 * Return: void
 */
void print_large_int(char *a, int len_a)
{
	int i;
	bool significant = false;

	for (i = 0; i < len_a; i++)
	{
		if (!significant)
		{
			if (a[i] == '0')
				continue;
			else
				significant = true;
		}
		putchar(a[i]);
	}
}

/**
 * add_large_int - Adds large integers stored in char array
 * @a: first int
 * @b: second int
 * @len_ab: length of array a and b (same size)
 * @c: stores answer
 * @len_c: length of answer array
 * Return: void
 */
void add_large_int(
		char *a, char *b, int len_ab,
		char *c, int len_c)
{
	int i;
	int sum, ones, tens;

	tens = 0;
	for (i = len_ab - 1; i >= 0; i--)
	{
		sum = (a[i] - '0') + (b[i] - '0') + tens;

		tens = 0;
		ones = sum % 10;

		if (sum > ones)
			tens = sum / 10;

		if (i > len_c - 1)
		{
			fprintf(stderr, "Answer array is too small!");
			exit(1);
		}
		c[i] = '0' + ones;
	}

}

/**
 * fibonacci - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 */
void fibonacci(void)
{
	int count, i;

	int arr_length = 24;
	char prev[] = "000000000000000000000001";
	char curr[] =  "000000000000000000000002";
	char temp[] = "000000000000000000000000";
	char result[] = "000000000000000000000000";

	print_large_int(prev, arr_length);
	putchar(',');
	putchar(' ');

	count = 98;

	while (--count)
	{
		print_large_int(curr, arr_length);
		for (i = 0; i < arr_length; i++)
			temp[i] = curr[i];
		add_large_int(curr, prev, arr_length, result, arr_length);
		for (i = 0; i < arr_length; i++)
			curr[i] = result[i];
		for (i = 0; i < arr_length; i++)
			prev[i] = temp[i];

		if (count - 1)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

/**
* main - entry point to the program
* Return: Always 0 (Success)
*/
int main(void)
{
	fibonacci();
	return (0);
}

#include <stdio.h>

/**
 * show_fib - prints the first 98 fib
 *
 */
void show_fib(void)
{
	int i;

	long double curr, next, temp;

	curr = 1;
	next = 2;

	i = 98;

	for (; i >= 0; i--)
	{
		printf("%.0Lf", curr);
		temp = curr;
		curr = next;
		next = temp + curr;

		if (next < temp)
		{
			printf("\n>>Integer overflow [%d]<<\n", i);
			break;
		}

		if (i != 0)
			printf(", ");
		else
			printf("\n");
	}
}

/**
* main - entry point to the program
* Return: Always 0 (Success)
*/
int main(void)
{
	show_fib();
	return (0);
}

#include <stdio.h>

/**
 * sum_fibonacci - sums even fib bellow 4M
 * @limit: long integer
 *
 * Return: unsigned long
 */
unsigned long sum_fibonacci(long limit)
{
	long int prev, curr, temp;
	unsigned long sum;

	prev = 1;
	curr = 2;
	sum = 0;

	while (curr < limit)
	{
		if (curr % 2 == 0)
			sum += curr;
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}
	return (sum);
}

/**
* main - entry point to the program
* Return: Always 0 (Success)
*/
int main(void)
{
	printf("%ld\n", sum_fibonacci(4000000));
	return (0);
}

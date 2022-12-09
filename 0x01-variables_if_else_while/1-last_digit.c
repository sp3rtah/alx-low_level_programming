#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int n;
	int last_number;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	last_number = abs(n);

	while (last_number > 10)
	{
		last_number %= 10;
	}

	if (n < 0)
	{
		last_number *= -1;
	}

	printf("Last digit of %d is %d ", n, last_number);
	if (last_number > 5)
		puts("and is greater than 5");
	else if (last_number == 0)
		puts("and is 0");
	else
		puts("and is less than 6 and not 0");

	return (0);
}

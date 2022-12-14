#include <stdio.h>

/**
 * fibonacci - prints the first 50 fibonacci numbers,
 * starting with 1 and 2, followed by a new line
 */
void fibonacci(void)
{
	long int prev, curr, count, temp;

	prev = 1;
	curr = 2;

	printf("%ld, ", prev);
	for (count = 0; count < 49; count++)
	{
		if (count == 48)
			printf("%ld\n", curr);
		else
		{
			printf("%ld, ", curr);
		}
		temp = curr;
		curr = curr + prev;
		prev = temp;
	}
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

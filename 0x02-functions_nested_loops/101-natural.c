#include "main.h"

#define MAXIMUM 1024

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
long i, sum;

sum = 0;
for (i = 0; i < MAXIMUM; i++)
{
if (((i % 3) == 0) || ((i % 5) == 0))
sum += i;
}
printf("%ld\n", sum);
return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	fwrite(quote, sizeof(quote[0]), sizeof(quote) / sizeof(quote[0]), stderr);
	return (0);
}

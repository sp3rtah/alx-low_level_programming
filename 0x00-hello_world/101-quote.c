#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;
	int charcount;

	charcount = 0;

	for (i = 0; quote[i]; i++)
		charcount++;

	fwrite(quote, sizeof(char), charcount, stderr);
	return (1);
}

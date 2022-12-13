#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: 0 on success
 */
int main(void)
{
	int i;
	char *word = "_putchar";

	for (i = 0; word[i] != '\0'; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}

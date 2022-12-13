#include <stdio.h>
/**
 * _isalpha - Checks for alphabetic character
 * @c: character
 * Return: int
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'z') ? 1 : 0);
}

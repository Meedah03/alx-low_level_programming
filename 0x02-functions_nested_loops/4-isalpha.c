#include "main.h"

/**
 * Description: _isalpha - _isalpha(int c)
 * @c: alphabets
 * Return: 0 for lowercase, otherwise 1
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}


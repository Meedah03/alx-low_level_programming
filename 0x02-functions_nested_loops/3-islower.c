#include "main.h"

/**
 * Description: _islower - _islower(int c)
 * @c:character
 * Return: 1 if lowercase, zero otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

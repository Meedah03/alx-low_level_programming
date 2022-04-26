#include "main.h"

/**
 * puts_half - prints half
 * @str: string
 * Return 0
 */
void puts_half(char *str)
{
	int i;
		
	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		i = i / 2;
	}
	else
	{
		i = (i + 1) / 2;
	}
	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}

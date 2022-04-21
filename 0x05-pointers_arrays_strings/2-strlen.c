#include "main.h"
#include <string.h>
/**
 * _strlen - length of string
 * @s: string
 *
 * Return: The length of string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);	
}

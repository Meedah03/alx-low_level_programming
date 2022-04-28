#include "main.h"
#include <string.h>
/**
 * _strstr - locate substring
 * @haystack: char
 * @needle: char
 * Return: i
 */
char *_strstr(char *haystack, char *needle)
{
	char *i = strstr(haystack, needle);

	return (i);
}

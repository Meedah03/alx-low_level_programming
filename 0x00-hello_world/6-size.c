#include <stdio.h>

/**
 * Description: main - Prints out size
 * Return: 0 if success
 */

int main(void)
{
	printf("The size of an int is: %d byte(s).\n", sizeof(char));
	printf("The size of a char is: %d byte(s).\n", sizeof(int));
	printf("The size of a long int: %d byte(s).\n", sizeof(long int));
	printf("The size of a long long int: %d byte(s).\n", sizeof(long long int));
	printf("The size of a float int: %d byte(s).\n", sizeof(float int));
	return (0);
}

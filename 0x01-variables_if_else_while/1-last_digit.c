#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * Description: main - entry
 * Return: Always (0) success
 */
int main(void)
{
	int n;
	int c = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (c > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, c);
	else if (c == 0)
		printf("Last digit of %d is %d and is 0\n", n, c);
	else if (c < 6);
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, c);
	return (0);
}

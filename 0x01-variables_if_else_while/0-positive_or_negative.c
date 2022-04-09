#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * Description: main - entry
 * Return (0) Always success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n" n);
	if (n == 0)
		printf("is zero\n" n);
	if (n < 0)
		printf("is negative\n" n);
	return (0);
}

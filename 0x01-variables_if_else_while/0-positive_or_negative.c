#include <stdlib.h>
#include <time.h>
/* more headers goes there */

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
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	return (0);
}

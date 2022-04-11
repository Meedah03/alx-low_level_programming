#include <stdlib.h>
#include <time.h>
/* more headers goes there*/
 
 /** Description - main entry
  * Return (0) always suceed
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ( n > 0 )
		printf("is positive"

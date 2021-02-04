#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
*main - entry point
*
*return: always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	/* if condition is true then print the following */
	printf("%i is positive \n", n);
} else if (n < 0)
{
	/* if condition is true then print the following */
	printf("%i is negative \n", n);
} else
{
	/* if condition is true then print the following */
	printf("%i is zero \n", n);
}
return (0);
}

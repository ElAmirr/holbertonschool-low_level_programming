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
srand(time(NULL));
int r = rand();
if (r > 0)
{
	/* if condition is true then print the following */
	printf("%i is positive \n", r);
} else if (r < 0)
{
	/* if condition is true then print the following */
	printf("%i is negative \n", r);
} else
{
	/* if condition is true then print the following */
	printf("%i is zero \n", r);
}
return (0);
}

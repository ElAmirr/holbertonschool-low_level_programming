#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int is;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		/** if condition is true then print the following */
		printf("Last digit of %i is %i and is greater than 5\n", n, is);
	}
	else if (n % 10 < 6 && n % 10 != 0)
	{
		/** if condition is true then print the following */
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, is);
	}
	else
	{
		/** if condition is true then print the following */
		printf("Last digit of %i is %i and is 0 \n", n, is);
	}
	return (0);
}

#include "holberton.h"
/**
* swap_int - main function.
* @a: integer.
* @b: integer.
* Return: no return.
*/
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

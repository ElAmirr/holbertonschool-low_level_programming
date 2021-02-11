#include "holberton.h"
/**
* function that draws a straight line in the terminal.
* @n: integer.
* Return: a line or not.
*/
void print_line(int n)
{
int i;

i = 0;
if (n > 0)
{
while (i < n)
{
_putchar('_');
i++;
}
}
_putchar('\n');
}

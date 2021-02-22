#include "holberton.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @s: starting address of memory to be filed.
 * @b: value to be filed.
 * @n: nuber of bytes to be filled starting fron ptr to be filled.
 * Return: @s filled from b.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

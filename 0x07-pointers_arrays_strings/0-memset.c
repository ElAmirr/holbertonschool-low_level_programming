#include "holberton.h"
/**
 * _strncat - concatenates two strings
 * @s: starting address of memory to be filed
 * @b: value to be filed
 * @n: nuber of bytes to be filled starting fron ptr to be filled
 * Return: _memset
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}

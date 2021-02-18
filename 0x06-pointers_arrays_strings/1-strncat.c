#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: concatination string
 * @src: append string
 * @n: nuber of bytes
 * Return: _strncat
 */
char *_strncat(char *dest, char *src, int n)
{
int j, i = 0;
while (dest[i] != '\0')
{
i++;
}
for (j = 0; j <= n; j++)
{
if (src[j] != '\0')
{
dest[i] = src[j];
i++;
}
}
dest[i] = '\0';
return (dest);
}

#include "holberton.h"
/**
 * _strncpy - a function that copirs a string
 * @dest: pointer to char
 * @src: pointer to a char
 * @n: nuber of int
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (src[i] != '\0' && i < n)
{
dest[i] = src[i];
i++;
}
while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}

#include "holberton.h"
/**
 * _strcat - concatenates two strings
 * @dest: concatination string
 * @src: append string
 * Return: On success dest.
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int j = 0;
while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);

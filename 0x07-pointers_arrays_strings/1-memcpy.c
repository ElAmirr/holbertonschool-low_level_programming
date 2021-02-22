#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: This is pointer to the destination array where the content is to be copied.
 * @src: This is pointer to the source of data to be copied.
 * @n: This is the number of bytes to be copied.
 * Return: This function returns a pointer to destination, which is @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i <= n)
{
    dest[i] = src[i];
    i++;
}
return (dest);
}

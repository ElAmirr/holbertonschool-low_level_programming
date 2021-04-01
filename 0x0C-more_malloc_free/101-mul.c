  
#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
/**
* _strlen - main function that returns the length of a string.
* @s : string
* Return: length of the string s.
*/
int _strlen(char *s)
{
int x;

x = 0;
	while (*s != '\0')
	{
	s++;
	x++;
	}
return (x);
}



/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
* _atoi - Transforms a string to an integer.
* @s: the string.
* Return: Integer.
*/
int _atoi(char *s)
{
	int i, fn = 1, ne = 1;
	unsigned int n = 0;

	i = 0;
	while (s[i] && fn)
	{
		if (s[i] == '-' && !n)
			ne *= -1;
		if (s[i] >= '0' && s[i] <= '9' && fn)
		{
			n *= 10;
			n += s[i] - '0';
		}
		else if (n > 0)
			fn = 0;
		i++;
	};
	n *= ne;
	return (n);
}


/**
* fail - function that returns an error on exit.
* @void: void.
* Return: exit.
*/
void fail(void)
{
	char *error;
	int i;

	error = "Error";

	for (i = 0; error[i] != '\0'; i++)
		_putchar(error[i]);
	_putchar('\n');
	exit(98);
}

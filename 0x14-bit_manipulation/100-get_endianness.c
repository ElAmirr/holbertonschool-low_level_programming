#include "holberton.h"

/**
 * get_endianness - Checks the endianness.
 * Return: check endiannes
 */
int get_endianness(void)
{
    int num = 1;
    char *endian = (char *)&num;

    if (*endian == 1)
        return (1);

    return (0);
}
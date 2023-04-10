#include "main.h"

/**
 * binary_to_uint - Convert a binary number to an unsigned int
 * @b: String of 0's and 1's
 * Return: Decimal representation of the binary number
 * Author : 'Bode Stephen
 */
unsigned int binary_to_uint(const char *b)
{
        unsigned int dec = 0; /* Dec holds the decimal format */

        if (b == NULL)
                return (0);

        while (*b)
        {
                if (*b == '1')
                        dec = (dec << 1) | 1;
                else if (*b == '0')
                        dec <<= 1;
                else
                        return (0);
                b++;
        }

        return (dec);
}


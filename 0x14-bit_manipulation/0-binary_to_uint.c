#include "main.h"
/**
 * binary_to_uint - Converts a binary string to an unsigned integer
 * @b: String of 0's and 1's to be converted
 *
 * This function converts a binary string to an unsigned integer. The binary
 * string should consist only of '0' and '1' characters. If the string contains
 * any other characters, the function returns 0.
 *
 * Return: Unsigned integer representation of the binary string, or 0 if an
 * error occurred.
 *
 * Author: 'bode Stephen
 * 
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

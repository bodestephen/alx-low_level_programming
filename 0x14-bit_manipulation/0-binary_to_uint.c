#include <main.h>
/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 *
 * @b: A pointer to a string containing a binary number.
 *
 * Return: The unsigned integer value of the binary number, or 0 if an error occurs.
 */

unsigned int binary_to_uint(const char *b)
{
    unsigned int result = 0;
    int i;

    if (b == NULL)
        return 0;

    for (i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0' || b[i] == '1')
        {
            result <<= 1; /* multiply result by 2 */
            result += b[i] - '0'; /* add current bit to result */
        }
        else
        {
            return 0;
        }
    }

    return result;
}



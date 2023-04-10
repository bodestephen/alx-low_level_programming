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
    unsigned int dec = 0;
    int i = 0;

    if (b == NULL)
    {
        return (0);
    }

    while (b[i] != '\0')
    {
        if (b[i] == '1' || b[i] == '0')
        {
            dec = dec * 2 + (b[i] - '0');
            i++;
        }
        else
        {
            return (0);
        }
    }

    return (dec);
}


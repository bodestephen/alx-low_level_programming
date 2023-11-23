#include <stdio.h>

/**
 * binaryStringToUInt - converts a binary string to an unsigned int
 *
 * @b: string that contains 0 and 1 characters
 *
 * Return: the number converted or 0 if @b contains
 *         a character that is not 0 or 1, or when @b is null
 */
unsigned int binaryStringToUInt(const char *b)
{
    int index;
    unsigned int result = 0, base2 = 1, num = 0;

    /* Error handling: if b is NULL, return 0 */
    if (b == NULL)
    {
        fprintf(stderr, "Error: Input string is NULL.\n");
        return 0;
    }

    /* Iterate through the string */
    for (index = 0; b[index] != '\0'; index++)
    {
        num = _atoi(b[index]); /* Convert char to number */

        /* Error handling: if the character is not 0 or 1, return 0 */
        if (num != 0 && num != 1)
        {
            fprintf(stderr, "Error: Invalid character '%c' at index %d.\n", b[index], index);
            return 0;
        }

        result = (result << 1) | num; /* Shift left and add num */
    }

    return result;
}


#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @binary: pointer to a string of 0 and 1 chars
 *
 * Return: converted number, or 0 if there is an invalid char in the string
 * 
 * Author: 'Bode Stephen
 *         hello@olabodestephen.com
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int decimal = 0;
	int len = 0;

	if (binary == NULL)
		return (0);

	while (binary[len] != '\0')
	{
		if (binary[len] != '0' && binary[len] != '1')
			return (0);
		len++;
	}

	for (int i = len - 1, j = 0; i >= 0; i--, j++)
	{
		if (binary[i] == '1')
			decimal += 1 << j;
	}

	return (decimal);
}


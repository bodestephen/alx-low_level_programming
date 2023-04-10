#include "main.h"

/**
 * print_binary - Prints the binary representation of a decimal number
 * @n: Decimal number to be converted
 *
 * This function takes a decimal number and prints its binary representation to
 * the standard output. The binary digits are printed in order of increasing
 * significance, with the most significant digit appearing first.
 *
 * Return: void
 *
 * Author: [Your Name]
 *        [Your Email]
 */
void print_binary(unsigned long int n)
{
	int temp;
	static int count;

	if (n == 0 && count > 0)
		return;
	else if (n == 0)
	{
		_putchar('0');
		return;
	}

	temp = (n & 1);
	count++;
	print_binary(n >>= 1);
	_putchar('0' + temp);
}

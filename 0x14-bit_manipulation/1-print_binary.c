#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i = 63, bits = 0;
	unsigned long int new_val;

	while (i >= 0)
	{
		new_val = n >> i;
		if (new_val & 1)
		{
			_putchar('1');
			bits++;
		}
		else if (bits)
		{
			_putchar('0');
		}
		i--;
	}
	if (!bits)
	{
		_putchar('0');
	}
}

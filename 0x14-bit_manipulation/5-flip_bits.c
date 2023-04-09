#include "main.h"

/**
 * flip_bits - counts the number of bits needed to change
 * one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits needed to change the number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 63, count = 0;
	unsigned long int new_val;
	unsigned long int result = n ^ m;

	while (i >= 0)
	{
		new_val = result >> i;
		if (new_val & 1)
			count++;
		i--;
	}
	return (count);
}

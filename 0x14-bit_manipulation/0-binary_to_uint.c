#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts the string to an unsigned int
 * @b: the string that is to be converted
 *
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0')
		{
			value <<= 1;
		}
		else if (b[i] == '1')
		{
			value <<= 1;
			value |= 1;
		}
		else
		{
			return (0);
		}
	}
	return (value);
}

#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *) &i;

	if (*p == 1)
	return (1);
	else
		return (0);
}

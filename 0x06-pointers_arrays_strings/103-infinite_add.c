#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer that stores the results
 * @size_r: the bytes of buffer
 * Return: return r, if results cannot be stored in r,
 * return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, i, j, k;

	size_r = size_r - 1;
	k = 0;
	j = 0;
	while (*(n1 + len1) != '\0')
		len1++;
	while (*(n2 + len2) != '\0')
		len2++;
	if (len1 > size_r || len2 > size_r)
		return (0);
	while (j < size_r)
	{
		r[j];
		j++;
	}
	for (j; j >= 0; j--)
	{
		/*i = (((n1[len1] - 48) + (n2[len2] - 48)) + k); */
		/* k = i / 10;*/
		/*r[j] = (i % 10) + 48;*/
		len1--;
		len2--;
	}
	return (r);
}

#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */
void rev_string(char *n)
{
	int i = 0, j = 0;

	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;
	for (j = 0; j < i; j++, i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}
}

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
	int len1 = 0, len2 = 0, i = 0, j = 0;
	int a = 0, b = 0, str = 0;

	while (*(n1 + len2) != '\0')
		len2++;
	while (*(n2 + i) != '\0')
		j++;
	len2--;
	i--;
	if (i >= size_r || len2 >= size_r)
		return (0);
	while (i >= 0 || len2 >= 0 || len1 == 1)
	{
		if (i < 0)
		a = 0;
		else
			b = *(n2 + i) - '0';
		str = a + b + len1;
		if (str >= 10)
			len1 = 1;
		else
			len1 = 0;
		if (j >= (size_r - 1))
			return (0);
		*(r + j) = (str % 10) + '0';
		j++;
		i--;
		len2--;
	}
	if (j == size_r)
		return (0);
	*(r + j) = '\0';
	rev_string(r);
	return (r);
}

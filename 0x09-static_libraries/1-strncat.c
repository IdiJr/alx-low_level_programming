#include "main.h"

/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int start = 0;
	int end = 0;

	start = 0;
	while (dest[start] != '\0')
	{
		start++;
	}
	end = 0;
	while (end < n && src[end] != '\0')
	{
		dest[start] = src[end];
		start++;
		end++;
	}
	dest[start] = '\0';
	return (dest);
}

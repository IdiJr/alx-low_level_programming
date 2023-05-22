#include "main.h"

/**
 * _strcat - concantenates @src to @dest
 * @src: source string
 * @dest: the destination string
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *m = needle;

		while (*i == *m && *m != '\0')
		{
			i++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}

#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 * @str: pointer
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	char *p = str;

	while (*p)
	{
		if (*p >= 'a' && *p <= 'z')
		{
			*p -= ('a' - 'A');
		}
		p++;
	}
	return (str);
}

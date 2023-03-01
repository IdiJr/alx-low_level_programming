#include "main.h"


/**
 * cap_string - Capitalizes all words of a string.
 *
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */

char *cap_string(char *str)
{
	int input = 0;

	while (str[input])
	{
		while (!(str[input] >= 'a' && str[input] <= 'z'))
			input++;

		if (str[input - 1] == ' ' ||
				str[input - 1] == '\t' ||
				str[input - 1] == '\n' ||
				str[input - 1] == ',' ||
				str[input - 1] == ';' ||
				str[input - 1] == '.' ||
				str[input - 1] == '!' ||
				str[input - 1] == '?' ||
				str[input - 1] == '"' ||
				str[input - 1] == '(' ||
				str[input - 1] == ')' ||
				str[input - 1] == '{' ||
				str[input - 1] == '}' ||
				input == 0)
			str[input] -= 32;
		input++;
	}
	return (str);
}

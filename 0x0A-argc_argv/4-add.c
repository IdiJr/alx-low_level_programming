#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - takes positive integer arguments and returns sum
 * @argc: number of command line arguments.
 * @argv: array that cantains the program command line arguments
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i, j, length, sum = 0;
	char *ptr;

	for (i = 1; i < argc; i++)
	{
		ptr = argv[i];
		length = strlen(ptr);

		for (j = 0; j < length; j++)
		{
			if (!isdigit(*ptr + j))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

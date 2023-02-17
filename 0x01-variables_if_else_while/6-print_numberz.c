# include <stdio.h>

/**
 * main - prints numbers between 0 and 9
 *
 * Return: 0 if success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

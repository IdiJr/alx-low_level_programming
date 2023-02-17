# include <stdio.h>

/**
 * main - prints numbers between 0 to 9 with
 *
 * Return: Always 0 if success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

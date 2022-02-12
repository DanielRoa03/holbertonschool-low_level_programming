#include <stdio.h>

/**
 * main - print numbers from zero to 9 whit commas and spaces
 *
 * Return: 0
 */
int main(void)
{
	int c = 48;

	while (c < 58)
	{
		putchar(c);
		if (c != 57)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}

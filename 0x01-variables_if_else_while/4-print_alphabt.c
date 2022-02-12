#include <stdio.h>

/**
 * main - print the alphabet but not the e and q
 *
 * Return: 0
 */
int main(void)
{
	int c = 97;

	while (c < 123)
	{
		if ((c != 101) && (c != 113))
		{
		putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
 * main - A program that prints all the possible combination of
 * single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 9; n++)
	{
		putchar(n + '0');
		putchar(',')
			putchar(' ');
	}
	putchar('9');
	putchar('\n');
	return (0);
}

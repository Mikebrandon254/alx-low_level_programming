#include <stdio.h>

/**
 * main - A program that prints all the possible combination of
 * single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 57; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

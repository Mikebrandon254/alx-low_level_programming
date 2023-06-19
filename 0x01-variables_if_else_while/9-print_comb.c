#include <stdio.h>

/**
 * main - A program that prints all the possible combination of
 * single digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n);
		if (n != 8)
	}
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

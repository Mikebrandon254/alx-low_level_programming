#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the number from 1 to 100 followed by line
 * but for multiple of three prints fizz instead of a number
 * and for the multiples of five buzz
 * Return: Always 0 (Success)
 */
int main (void) 
{
	int i;
	
	{
		for (int num = 1; num <= 100; num++)
		{
			if (num % 3 == 0 && num % 5 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (num % 3 == 0)
			{
				printf("Fizz ");
			}
			else if (num % 5 == 0)
			{
				printf("Buzz ");
			}
			else
			{
			       	printf("%d ", num);
			}
		}
		printf("\n");
		return 0;
	}


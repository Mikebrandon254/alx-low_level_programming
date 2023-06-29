#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int a[5];
    int *p;

    p = a + 2;
    *(p + 2) = 98;  /* New line */

    a[2] = 102;
    printf("a[2] = %d\n", a[2]);

    return (0);
}


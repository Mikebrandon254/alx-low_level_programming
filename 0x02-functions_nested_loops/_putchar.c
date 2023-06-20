#include "main.h"
#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * @c: The character to print
 *
 * Return: On siccess 1.
 * On error, -1 is retured, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1. & c, 1));

#include "main.h"

/**
 * print_rev - prints a string passed to it in reverse
 *
 * @s: variable holding the string to be printed in reverse
 *
 * Return: void
 *
 */
void print_rev(char *s)
{
	int len = 0;
	int index;

	while (*s != '\0')
	{
		++len;
		++s;
	}

	for (index = len; index >= 0; index--)
		_putchar(str[index]);

	_putchar('\n');

}

#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int ii = 0;

	while (ii < 10)
	{
		int jj;

		for (jj = 'a'; jj <= 'z'; jj++)
			_putchar(jj);
		_putchar('\n');

		ii++;
	}
}

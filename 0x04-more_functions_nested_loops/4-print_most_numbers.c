#include "main.h"

/**
 * print_most_numbers - print numbers between 0 to 9
 * (neither 2 or 4)
 * Return: no return.
 */
void print_most_numbers(void)
{
	int sh;

	for (sh = 48; sh < 58; sh++)
	{
		if (sh != 50 && sh != 52)
			_putchar(sh)
	}
	_putchar('\n');
}

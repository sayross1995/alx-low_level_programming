#include "main.h"

/**
 * print_numbers - print 0-9
 * return: void
 */

void print_numbers(void)
{
	int c;

for (c = 0 ; c <= 9 ; c++)
{
putchar(c + ‘0’);
}
putchar('\n');
}

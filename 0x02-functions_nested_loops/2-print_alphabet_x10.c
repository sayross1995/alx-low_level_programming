#include "main.h"
/**
 *print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 *
 *Return: always 1(Success)
 */
void print_alphabet(void)
{
	int i = 97;

	do {
		_putchar(i);
		i++;
	} while (i < 123);
	_putchar('\n');
}

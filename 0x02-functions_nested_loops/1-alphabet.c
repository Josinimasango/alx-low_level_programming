#include "main.h"

/**
 * print_alphabet - print alphabets in lowercase followed by new line.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_puthar(letter);

	_putchar('\n');
}

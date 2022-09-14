#include"main.h"

/**
 * main - Entry point
 *
 * Description: print_alphabet - utilizes on the _putchar function to print
 *
 *
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ++ch)
		_putchar(ch);
	_putchar('\n');
}

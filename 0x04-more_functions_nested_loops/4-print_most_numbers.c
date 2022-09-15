#include"main.h"

/**
 * print_numbers - print 0 - 9
 *             Do not print 2 and 4
 *
 * Return: Always 0 (Success)
*/

void print_numbers(void)
{
	int num = 0;

	do {
		_putchar(num + 48);
    if (num == 50 && num == 52){
    print("");
    }
		num++;
	} while (num >= 0 && num <= 9);
	_putchar('\n');
}

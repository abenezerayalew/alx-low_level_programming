#include"main.h"

/**
 * islower - check for lower case letter
 *
 * Return: returns 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

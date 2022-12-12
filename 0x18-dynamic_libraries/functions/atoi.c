#include "../main.h"
/**
 * _atoi - function that converts a string
 *       into an integer
 *
 * @s: string input pointer
 *
 * Return: 0 if there is no number
*/

int _atoi(char *s)
{
	int result;
	int puiss;

	result = 0;
	puiss = 1;
	while (('-' == (*s)) || ((*s) == '+'))
	{
		if (*s == '-')
			puiss = puiss * -1;
		s++;
	}
		while ((*s >= '0') && (*s <= '9'))
		{
			result = (result * 10) + ((*s) - '0');
			s++;
		}
	return (result * puiss);
}

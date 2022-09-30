#include <stdlib.h>
#include <stdio.h>

/**
 * isNumber - check if string array is number
 * @s: string to check
 *
 * Return: 0 or 1
*/

int isNumber(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
		return (1);
		i++;
	}
	return (0);
}

/**
 * main - a program that adds positive numbers
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
	if (isNumber(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}

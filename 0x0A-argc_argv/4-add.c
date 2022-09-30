#include <stdlib.h>
#include <stdio.h>

/**
 * isNumber - check if string array is number
 * @num: string to check
 * Return: 0 if it's a number
 *         1 if it's not a number
*/


int isNumber(char num[])
{
	int i, l = strlen(num);

	for (i = 0; i < l; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}


/**
 * main - a program that adds positive numbers
 *
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
	if (isInteger(argv[argc]))
	{
		printf("Error\n");
		return (1);
	}
	sum += atoi(argv[argc]);
}

printf("%i\n", sum);

return (0);
}

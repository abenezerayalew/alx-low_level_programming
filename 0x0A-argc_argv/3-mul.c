#include <stdlib.h>
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("error");
		return (1);
	}
	else
	{
	int i = 1, mul = 1;

	mul = (atoi(argv[i]) * atoi(argv[2]));
	printf("%d\n", mul);
	}
	return (0);
}

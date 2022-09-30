#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the number of arguments passed into it
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Succes)
 */
int main (int __attribute__((unused)) argc, char *argv[])
{
	for(i = 0; i<argc;i++)
	printf("argv[%d]=%s\n",argv[i]);
	return (0);
}

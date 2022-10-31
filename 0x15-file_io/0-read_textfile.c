#include "main.h"
/**
 * read_textfile - a function that reads a text file and
 *	prints it to the POSIX standard output.
 * @filename: is the file to read
 * @letters: number of letters to read and print from file
 *
 * Return: number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t checker, counter;
	char *buffer;

	if (filename == NULL)
	return (0);

	file = open(filename, O_RDONLY, 0600);

	if (file == -1)
	{
		printf("Error");
		return (1);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	checker = read(file, buffer, letters);
	if (checker == -1)
		return (0);
	counter = write(STDOUT_FILENO, buffer, checker);
	if (counter == -1 || checker != counter)
		return (0);

	free(buffer);
	close(file);
	return (counter);
}

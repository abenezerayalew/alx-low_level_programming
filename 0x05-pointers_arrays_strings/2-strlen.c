/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int lengthCounter;

	for (lengthCounter = 0; *s != '\0'; ++s)
		++lengthCounter;

	return (lengthCounter);
}

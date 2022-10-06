#include <stdlib.h>

/**
 * _strlen - find length of a string
 * @sl: string
 * Return: int
 */
unsigned int _strlen(char *sl)
{
	unsigned int size;

	for (size = 0; sl[size] != '\0'; size++)
	;
	return (size);
}

/**
 * *string_nconcat - a function that concatenates two strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: bytes of @s2 to add to @s1 to be a new string
 *
 * Return: pointer or null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i, j;
char *str;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
if (n < _strlen(s2))
	str = malloc(_strlen(s1) + n * sizeof(char) + 1);
else
	str = malloc(_strlen(s1) + _strlen(s2) + 1);
if (str == 0)
	return (NULL);
/*add s1 to str*/
for (i = 0; s1[i] != '\0'; i++)
	str[i] = s1[i];
/*add s2 n bytes to str*/
for (j = 0; s2[j] != '\0' && j < n; j++)
{
	str[i] = s2[j];
	i++;
}
str[i] = '\0';
return (str);
}

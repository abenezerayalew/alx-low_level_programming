/**
 * _isupper - check if c is digit
 *
 * @c: input for alphabet
 *
 * Return: 1 if its digit, 0 if not
*/

int _isupper(int c)
{
	if (c >= 30 && c <= 39)
		return (1);
	else
		return (0);
}

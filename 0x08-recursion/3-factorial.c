/**
 * factorial - a function that returns the factorial of a given number
 *
 * @n: positive number
 *
 * Return: factorial of @n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);	/* -1 to indicate an error */
	else if (n == 0)
		return (1);	/*return factorial of 0 */
	else
		return (n * factorial(n - 1));	/*return factorial of n if its not less or equal to 0*/
}

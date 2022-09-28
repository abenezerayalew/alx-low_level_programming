/**
 * _pow_recursion - a function that returns the value of x the power of y
 *
 * @x: integer x
 * @y: integer y
 *
 * Return: the power of @x by @y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)	/* if y is negative  should return -1  */
		return (-1);
	else if (y == 0)	/* if y=0,  x to the power of 0 is 1  */
		return (1);
	else if (y % 2 == 0)
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}

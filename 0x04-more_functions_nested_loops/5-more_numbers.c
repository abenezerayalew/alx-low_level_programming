#include"main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 *		can only use _putchar three times
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
  int i=0,j=0;
while(i<=10)
{
  j=0;
  while(j<=14)
  {
    _putchar(i);
    j++;
  }
  _putchar("\n");
  i++;
}
}

#include "main.h"
/**
 *print_sign- Function name
 *@n: This is the function parameter
 *Return: This will retrun + if the number is greter than 0
*/
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
	_putchar('+');
	x = 1;
	}
	else if (n == 0)
	{
	_putchar('0')
	x = 0;
	}
	else
	{
	_putchar('-')
	x = -1;
	}
	return (x);
}

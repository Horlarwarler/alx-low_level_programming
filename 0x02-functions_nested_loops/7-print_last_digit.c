#include "main.h"
/**
 *print_last_digit- Main function
 *description: This prints out last digit
 *@n: - Parameter
 *Return: 0
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	_putchar(a + '0');
	return (0);
}

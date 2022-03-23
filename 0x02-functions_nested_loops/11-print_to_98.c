#include "main.h"
/**
 *print_to_98 - print number to 98
 *@n: Parameter
 *Return(0)
*/
void print_to_98(int n)
{
	int counting;

	int stop;

	if (n <= 98)
	{
		counting = 1;
		stop = 99;
	}
	else
	{
		counting = -1;
		stop = 97;
	}
	while (n != stop)
	{
	if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	n += counting;
	_putchar(44);
	_putchar(32);
	}
	_putchar('\n');
}

#include "main.h"
/**
 *print_times_table - The main fucnction
 *@n: Parameter
 *Return: Timetabel
*/
int print_times_table(int n)
{
	if (n <= 0 || n >= 15)
	{
		return (0);
	}
	else
	{
	int row = 0;

	int result;

	while (row != n)
	{
		int col = 0;

		while (col != n)
		{
			result = col * row;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else
			{
				_putchar(result + '0');
			}
			col++;
			_putchar(44);
			_putchar(32);
		}
	_putchar('\n');
	row++;
	}
	_putchar('\n');
	return (0);
	}
}

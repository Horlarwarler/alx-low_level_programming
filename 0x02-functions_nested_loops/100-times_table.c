#include "main.h"
/**
 *print_times_table - The main fucnction
 *@n: Parameter
 *Return: Timetabel
*/
void print_times_table(int n)
{
	if (n > 0 && n < 15)
	{
	int row = 0;

	int result;

	n = n + 1;
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
			if (col < (n - 1))
			{
			_putchar(44);
			_putchar(9);
			}
		}
	_putchar('\n');
	row++;
	}
	_putchar('\n');
	}
}

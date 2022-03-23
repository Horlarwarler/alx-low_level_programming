#include "main.h"
/**
 *times_table - The main fucnction
 *description: Print time table
 *Return: Timetabel
*/
void times_table(void)
{
	int row = 0;

	int result;

	while (row < 10)
	{
		int col = 0;

		while (col < 10)
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
			if (col != 9)
			{
			_putchar(44);
			_putchar(32);
			}
		}
	_putchar('\n');
	row++;
	}
	_putchar('\n');
}

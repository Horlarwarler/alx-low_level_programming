#include "main.h"
/**
 *jack_bauer - funtion name
 *description: print out time
 *Return: 0
*/
void jack_bauer(void)
{
	int hr = 0;

	while (hr < 24)
	{
		int min = 59;

		while (min > 0)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar((':'));
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			min++;
			_putchar('\n');
		}
		hr++;
	}
	_putchar('\n');
}

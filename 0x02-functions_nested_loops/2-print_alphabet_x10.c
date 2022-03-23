#include "main.h"
/**
 * print_alphabet_x10 - This contains the main file
 * description: This print outs putchar
 * Return: 0
*/
void print_alphabet_x10(void)
{
	char az;

	for (int i = 0; i < 10 ; i++)
	{
	az = 'a';
	while (az <= 'z')
	{
		_putchar(az);
		az++;
	}
	}
	_putchar('\n');
}

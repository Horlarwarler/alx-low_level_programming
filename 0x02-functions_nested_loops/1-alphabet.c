#include<stdio.h>
/**
 * print_alphabet- This contains the main file
 * description: This print outs putchar
 * Return: 0
*/
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}

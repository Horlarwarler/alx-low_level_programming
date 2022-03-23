#include<stdio.h>
/**
 * main - This contains the main file
 * description: This print outs putchar
 * Return: 0
*/
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		printf("%c",i);
		i++;
	}
	printf("\n");
}



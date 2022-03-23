#include <stdio.h>
/**
 *main - This is the main
 *description: Fibonaci
 *Return: 0
*/
int main(void)
{
	printf("%i, ", 1);
	printf("%i, ", 2);
	int n = 1;

	int m = 2;

	int count = 48;

	unsigned long int nextfib;

	while (count != 0)
	{
		nextfib = m + n;
		n = m;
		m = nextfib;
		count--;
		if (count >= 1)
		{
		printf("%lu, ", nextfib);
		}
		else
		{
		printf("%lu", nextfib);
		}
	}
	putchar('\n');
}

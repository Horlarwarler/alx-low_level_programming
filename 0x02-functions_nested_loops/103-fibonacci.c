#include <stdio.h>
/**
 *main - This is the main
 *description: Fibonaci
 *Return: 0
*/
int main(void)
{
	int n = 1;

	int m = 2;

	int nextfib = 0;

	int sum = 2;

	int count = 2;

	while (count  <= 4000000)
	{
		nextfib = m + n;
		n = m;
		m = nextfib;
		if (nextfib % 2 == 0)
		{
			sum += nextfib;
		}
		count++;
	}
	printf("%i\n", sum);
}

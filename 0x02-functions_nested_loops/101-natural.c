#include <stdio.h>
/**
 *main - Multiples of 3 and 5
 *description: - mutitlples
 *Return:- 0
*/
int main(void)
{
	int sum = 0;

	int count = 1;

	while (count < 1024)
	{
		if (count % 3 == 0 || count % 5 == 0)
		{
			sum += count;
		}
		count++;
	}
	printf("%i", sum);
	putchar('\n');
}

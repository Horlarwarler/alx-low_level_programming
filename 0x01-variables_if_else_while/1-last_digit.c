#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determine if a random number is positive, negative or zero
* Return: 0 on success
*/
int main(void)
{
int m;
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
if (m < 6 && m > 0)
{
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, m);
}
else if (m == 0)
{
printf("Last digit of %i is 0 and is 0\n", n);
}
else
{
printf("Last digit of %i is %i and is greater than 5\n", n, m)
}
return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determine if a random number is positive, negative or zero
* Return: 0 on success
*/
int main(void)
{
int i = 0;
while (i < 10)
{
putchar(i + '0');
if (i < 9)
{
putchar(44);
putchar(32);
}
i++;
}
putchar('\n');
return (0);
}

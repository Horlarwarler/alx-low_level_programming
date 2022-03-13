#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determine if a random number is positive, negative or zero
* Return: 0 on success
*/
int main(void)
{
char c = 'a';
while (c <= 'z')
{
if (c != 'q' or c != 'e')
{
putchar(c);
}
c++;
}
putchar('\n');
return (0);
}

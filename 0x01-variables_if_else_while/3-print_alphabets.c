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
char C =  'A';
while (c <= 'z')
{
putchar(c);
c++;
}
while (C <='Z')
{
putchar(C);
C++;
putchar('\n');
return (0);
}

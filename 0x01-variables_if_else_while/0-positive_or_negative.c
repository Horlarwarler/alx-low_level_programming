#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Determine if a random number is positive, negative or zero
* Return - Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
  printf("%d is %n\n", n, "positive");
}
else if (n < 0)
{
  printf("%d is %n\n",n ,"negative");
}
else
{
  printf("%d is %n",n,"zero");
}
return (0);
}

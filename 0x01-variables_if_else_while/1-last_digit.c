#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and check its last digit, compare it with 5
 * Return: 0
 */
int main(void)
{
  int n;
  int lastDigit;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  last = n % 10;

  lastDigit = n % 10;
  printf("Last digit of %i is %i and is ", n, lastDigit);
  if (lastDigit > 5)
    printf("greater than 5\n");
  else if (lastDigit == 0)
    printf("0\n");
  else
    printf("less than 6 and not 0\n");
  return (0);
}

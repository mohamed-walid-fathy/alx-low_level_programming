#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
 * main - entry point of code
 * 
 * Description : prints last stored value of n
 * And whether if greater than zero, is zero, and bigger than 5
 * Returns 0 in case of success
 **/
int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  num = n%10;
  if (num>5)
         printf("Last digit of %i is %i and is greater than 5\n",n,num);
  else if (num ==0)
          printf("Last digit of %i is %i and is 0\n".n,num);
  else if(num < 6 && num !=0)
          printf("Last digit of %i is %i and is less than 6 and not 0\n",n,num);
  
  return (0);
}

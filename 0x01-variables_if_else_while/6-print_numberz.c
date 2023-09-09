#include<stdio.h>
/**
 * main - entry point of code
 * 
 * Description : prints all single using putchar
 * 
 * Returns 0 in case of success
 **/
int main(void)
{
  int x = 0;
  while (x<=9)
  {
      /* conversion to ASCII*/
      putchar(x + '0');
      x++;
  }
  putchar('\n');
  
  return (0);
}

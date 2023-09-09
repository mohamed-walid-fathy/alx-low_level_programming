#include<stdio.h>
/**
 * main - entry point of code
 * 
 * Description : prints all alphabetic characters except q and e
 * 
 * Returns 0 in case of success
 **/
int main(void)
{
  char x = 'a';
  while (x<='z')
  {
      if (x =='e'||x == 'q')
          x++;
      putchar(x);
      x++
  }
  putchar('\n');
  
  return (0);
}

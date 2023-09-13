#include"main.h"
/**
*main - entry point of code
*
*Description : prints the lowercase alphabet
*
*Return: 0 in case of success
**/
int _islower(int c);
int main(void)
{
        print_alphabet_x10 ();
        return (0);
}
int _islower(int c);
{
        if (c > 96 || c < 123)
        {
                return (1);
        }
        else
        {
                return (0);
        }
        
}

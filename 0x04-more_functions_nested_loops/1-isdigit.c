#include"main.h"

/**
*_isdigit - digit check
*@c:operand
*Description: checks if c is a digit
*Return: 0: fail ,1: success
*/

int _isdigit(int c)
{
        if ( c >= 1 && c <= 9)
        {
                return (1);
        }
        else
        {
                return (0);
        }
}

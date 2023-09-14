#include"main.h"

/**
*_isupper - uppercase check
*@c:operand
*Description: checks if c is uppercase
*Return: 0: fail ,1: success
*/

int _isupper(int c)
{
	if ( c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

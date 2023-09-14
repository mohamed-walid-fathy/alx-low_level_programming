#include"main.h"

/**
* _isupper - uppercase check
* @c:operand 
*Description: checks if c is uppercase
*Return: Description of the returned value
*/

int _isupper(int c)
{
	if( 65 <= c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

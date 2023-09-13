#include"main.h"
/**
*
*_isalpha : distincts if input is alphabetic or not
*
**/
int _islower(int c);
{
        if (c > 96 && c < 123 || c > 64 && c < 91)
        {
                return (1);
        }
        else
        {
                return (0);
        }

}

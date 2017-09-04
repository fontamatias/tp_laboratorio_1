#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"


float factorial (int  a)
{
    float factorial=1;
    for ( a ; a > 0 ; a--)
    {
        factorial = a*factorial;

    }

    return factorial;
}



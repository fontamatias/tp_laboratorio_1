#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

float division ( float a, float b)
{
    float division;
    while (b == 0)
    {
        printf ("Re ingrese el segundo parametro ( que no sea 0 )");
        scanf("%f", &b);
    }
    division = ( a / b);
    return division;
}

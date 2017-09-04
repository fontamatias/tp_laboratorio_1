#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

char confirmacion (char texto [])
       {
           char seguir;
           printf(" \n%s", texto);
           seguir = getche();
           seguir = tolower (seguir);
           while (seguir!='s' && seguir!='n')
                {
                     printf("\nError ingrese s/n\n");
                       seguir = getche();
                       seguir = tolower (seguir);
                }
    return seguir;

       }



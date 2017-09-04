#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int main()
{

    char seguir='s';
    int opcion=0;
    float x = 0;
    float y = 0;
    float resultado;
    while(seguir=='s')
    {
        opcion = menu(x, y);

        switch(opcion)
        {
            case 1:

                x = numeroEntero("\nIngrese el primers numero!");
                seguir =  confirmacion ("\nDesea seguir?") ;
                break;

            case 2:

                y = numeroEntero("\nIngrese el segundo numero!");
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 3:

                resultado = suma (x,y);
                printf("\nla suma es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 4:

                resultado = resta (x,y);
                printf("\nla resta es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 5:

                resultado = division (x,y);
                printf("\nla division es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 6:

                resultado = multiplicacion (x,y);
                printf("\nla multiplicacion es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 7:

                resultado = factorial (x);
                printf("\nla factorial es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;

            case 8:

                resultado = suma (x,y);
                printf("\nla suma es %.2f",resultado) ;
                resultado = resta (x,y);
                printf("\nla resta es %.2f",resultado) ;
                resultado = division (x,y);
                printf("\nla divicion es %.2f",resultado) ;
                resultado = multiplicacion (x,y);
                printf("\nla multiplicacion es %.2f",resultado) ;
                resultado = factorial (x);
                printf("\nla factorial es %.2f",resultado) ;
                seguir = confirmacion ("\nDesea seguir?") ;
                break;


            case 9:

                printf ("\n\n\n    CHAU ");
                seguir = 'n';
                break;

        }

}

}

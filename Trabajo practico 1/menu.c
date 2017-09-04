#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "funciones.h"

int menu(float x, float y)
     {
        int opcion;
        printf("\n1- Ingresar 1er operando (A=%.2f)\n",x);
        printf("2- Ingresar 2do operando (B=%.2f)\n",y);
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");
        scanf("%d",&opcion);
        return opcion;

     }

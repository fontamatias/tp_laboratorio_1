#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

int menu(char texto[])
{
    int opcion;
    printf("%s", texto);
    scanf("%d", &opcion);

    return opcion;
}
void cargarPersona(ePersonas lista[], int t)
{
    int i,j;
    int dniRep=0;
    int repLista = 0;
    int auxDni;

    for (i=0; i<t ; i ++)
    {
        repLista ++;
        if (lista[i].estado == 0)
        {
            printf("\nIngrese el nombre de la persona: ");
            fflush(stdin);
            gets(lista[i].nombre);
            printf("\nIngrese la edad de la persona: ");
            scanf("%d", &lista[i].edad);
            printf("\nIngrese el DNI de la persona: ");
            scanf("%d", &auxDni);
            for(j=0; j <t; j++)
            {
                if (auxDni==lista[j].dni)
                {
                    printf("Persona ya ingresada\n");
                    dniRep=1;
                }

            }
            if(dniRep == 0)
            {
                lista[i].dni=auxDni;
                lista[i].estado = 1;
            }
            break;
        }
        if (repLista==t)
        {
            printf("\n\nNo hay espacio para agregar mas personas!!!\n\n");
        }
    }

}
void inicializacionDeEstado(ePersonas lista[], int t)
{
    int i;

    for (i=0; i<t; i ++)
    {
        lista[i].estado = 0 ;
    }
}
void buscarPorDni (ePersonas lista[], int t)
{
    int i;
    int auxDni;
    char respuesta;
    int flag = 0 ;

    printf("\n Ingrese el DNI de la persona que se debe borrar \n ");
    scanf("%d", &auxDni);

    for (i=0; i<t ; i++)
    {
        if (lista[i].dni == auxDni)
        {
            printf ("\nNombre:%s \n \nEdad:%d \n \nDNI:%d \n", lista[i].nombre, lista[i].edad,lista[i].dni);
            printf("Desea borrar a esta persona? s / n");
            respuesta = getche();

            if (respuesta == 's')
            {
                lista[i].estado = 0;
                printf("\n La persona se ha borrado de la lista \n");
            }
            else
            {
                printf("\n No se borro a la persona. \n ");
            }
            flag = 1;

        }

    }
    if ( flag == 0)
    {
        printf("\n No se encontro a la persona \n");
    }
}
void ordenamientoLista (ePersonas lista[], int t)
{
    int i, j;
    ePersonas auxPersonas;

    for(i=0; i<t-1; i++)
    {

        for(j=i+1; j<t; j++)
        {

            if(stricmp(lista[i].nombre, lista[j].nombre)>0)
            {
                auxPersonas=lista[i];
                lista[i]=lista[j];
                lista[j]=auxPersonas;
            }
        }
    }

    for ( i= 0 ; i <t ; i ++)
    {
        if ( lista [i]. estado == 1)
        {

            printf(" *-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
            printf ("\nNombre:%s \n \nEdad:%d \n \nDNI:%d\n", lista[i].nombre, lista[i].edad,lista[i].dni);
        }
    }
}
int obtenerEspacioLibre(ePersonas lista[], int t)
{
    int i ;
    int contador = 0;
    for (i=0; i<t; i++)
    {
        if (lista [i]. estado == 0)
        {
            contador++;
        }
    }
    return contador;
}
void graficoEdades (ePersonas lista [], int t )
{
    int contador1=0;
    int contador2=0;
    int contador3=0;
    int i;

    for (i=0; i<t; i++)
    {
        if(lista[i].estado==1)
        {
            if (lista[i].edad<=18)
            {
                contador1++;
            }
            if (lista[i].edad>18 && lista[i].edad<=35)
            {
                contador2++;
            }
            if (lista[i].edad>35)
            {
                contador3++;
            }
        }
    }
    printf("\nMenores 18    ");
    for (i= 0; i<contador1; i++)
    {
        printf("* ");
        printf("\b");
    }
    printf("\nEntre 18 y 35 ");
    for (i= 0; i<contador2; i++)
    {
        printf("* ");
        printf("\b");
    }
    printf("\nMayores 35    ");
    for (i= 0; i<contador3; i++)
    {
        printf("* ");
        printf("\b");
    }
    printf("\n");
}
void cargaDatos(ePersonas lista[], int t)
{
    int dni[]= {1,2,3,4,5,6,7};
    char nombre[][50]= {"Matias Fontana","Carlos Sanchez","Pedro Rodriguez", "Sofia Russo", "Analia Prieto","Florecia Garcia","Micaela Aguirre"};
    int edad[]= {25,18,37, 15,65,54,36};
    int estado[]= {1,1,1,1,1,1,1};

    int i;

    for(i=0; i<7; i++)
    {
        lista[i].dni = dni[i];
        lista[i].edad = edad[i];
        lista[i].estado = estado[i];
        strcpy(lista[i].nombre,nombre[i]);
    }

}

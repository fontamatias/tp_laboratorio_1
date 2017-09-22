#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define TAM 20


int main()
{
    ePersonas listaPersonas[TAM];
    char seguir='s';
    int opcion=0;
    int espacioLibre;

    inicializacionDeEstado(listaPersonas, TAM);
    cargaDatos(listaPersonas, TAM);

    do
    {
        espacioLibre = obtenerEspacioLibre(listaPersonas , TAM);
        printf(" %d /20 ESPACIOS LIBRES",espacioLibre);
        opcion=menu("\n1)Agregar persona.\n2)Borrar persona.\n3)Imprimir lista ordenada por nombre.\n4)Imprimir grafico de edades.\n5)Salir.\n Elija una opcion: ");

        switch (opcion)
        {
        case 1:
            cargarPersona(listaPersonas, TAM);
            break;
        case 2 :
            buscarPorDni (listaPersonas, TAM);
            break;
        case 3 :
            ordenamientoLista (listaPersonas, TAM);
            break;
        case 4 :
            graficoEdades (listaPersonas, TAM);
            break;
        case 5:
            seguir='n';
            break;

        }
    }
    while(seguir=='s');

}

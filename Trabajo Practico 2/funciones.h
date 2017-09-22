#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct {

    char nombre[50];
    int edad;
    int estado;
    int dni;

}ePersonas;
/**
 * Carga1 a la lista una cantidad de 7 personas
 * \param ePersonas
 * \return ePersonas cargada con 7 personas a su lista
 */

void cargaDatos(ePersonas lista[], int t);
/**
 * Muestra un grafico de barras segun las edades de las personas en la lista
 * \param ePersonas.edades
 * \return Grafico de edades
 */

void graficoEdades (ePersonas lista [], int t );
/**
 * Introducimos los datos de las personas a la lista
 * \param ePersonas
 * \return ePersona cargada
 */
void cargarPersona(ePersonas lista[], int t);
/**
 *Ordena las personas de la lista por nombre
 * \param ePersonas
 * \return Lista ordenada
 */
void ordenamientoLista (ePersonas lista[], int t);
/**
 * Pone todos los estados de la estructura en 0, listos para igresar personas
 * \param ePersonas
 * \return ePersonas
 */
void inicializacionDeEstado(ePersonas[], int t);
/**
 * Obtiene la opcion del menu
 * \param Texto del menu
 * \return Opcion del menu
 *
 */
int menu(char[]);
/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */
int obtenerEspacioLibre(ePersonas lista[],int t);
/**
 * Obtiene el DNI deseado por el usuario y borra a la personas de la lista
 * @param lista el array se pasa como parametro.
 * @param dni el dni a ser buscado en el array y lo borra
 * @return la array sin la persona deseada
 */
void buscarPorDni(ePersonas lista[], int t);

#endif // FUNCIONES_H_INCLUDED

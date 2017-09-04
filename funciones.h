#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



#endif // FUNCIONES_H_INCLUDED
/** \brief Muestra un menu y nos devuelve la opcion deceada.
 *
 * \param Muestra el menu
 * \return devuelve una opcion
 *
 */
int menu(float x, float y);



/** \brief Nos devuelve un numero entero
 *
 * \param ingresa un teco que indica que numero ingresar
 * \return retorna el numero ingresado por el usuario
 *
 */
float numeroEntero(char texto []);



/** \brief permite saber si el usuario quiere continuar en la calculadora
 *
 * \param Texto. desea seguir?
 * \param valida el la letra ingresada
 * \return un s o n segun corresponda al while del main
 *
 */
char confirmacion (char texto []);

/** \brief suma dos numeros
 *
 * \param Dos numeros ingresados por el usuario
 * \return la suma de los numeros
 *
 */
float suma ( float a, float b);



/** \brief resta dos numeros
 *
 * \param Dos numeros ingresados por el usuario
 * \return la resta de los numeros
 *
 */
float resta ( float a, float b);



/** \brief divide dos numeros
 *
 * \param Dos numeros ingresados por el usuario y controla que el divisor no sea 0
 * \return division de los numeros
 *
 */
float division ( float a, float b);



/** \brief dimultiplica dos numeros
 *
 * \param Dos numeros ingresados por el usuario
 * \return multiplica de los numeros
 *
 */
float multiplicacion(float a, float b);



/** \brief Devuelve el factorial de un numero
 *
 * \param ingresa un numero por el usuario
 * \return el factorial de ese numero
 *
 */
float factorial (int a);

#include<stdio.h>
#include<stdlib.h>

/*
Ejercicio

Crear un programa que declare un arreglo de 100  posiciones.
Llenar el arreglo con la tabla del 2.
Mostrat el arreglo en la pantalla.

*/


int main(){
    
    char seguir;
    int i, numero;

    do{
        printf( "\nIntroduzca un numero entero: ");
        scanf( "%d", &numero );

        printf( "\nLa tabla de multiplicar del %d es:\n", numero );

        /* Inicio del anidamiento */

        for ( i = 1 ; i <=100; i++ )
            printf( "\n   %d * %d = %d", i, numero, i* numero );

        /* Fin del anidamiento */

        printf( "\nDesea ver otra tabla (s/n)?: ");
        scanf( "%c", &seguir );

    }while ( seguir != 'n' );

    return 0;
}
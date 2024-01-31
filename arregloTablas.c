#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio

Crear un programa que declare un arreglo de 100  posiciones.
Llenar el arreglo con la tabla del 2.
Mostrat el arreglo en la pantalla.


Pagina 28-Arreglos
*/


int main(){

int vector[100];
int i=0, numero;

printf("\nIntroduzca un numero entero: ");
scanf( "%d", &numero );


while(i<100){
    vector[i]=i*numero;
    i++;
}

i=0;

while(i<100){
    printf("vector[%d] = %d; \n", i, vector[i]);
    i++;
}

return 0;
}
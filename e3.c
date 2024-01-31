#include<stdio.h>
#include<stdlib.h>


/*
Ejercicio

Crear un arreglo de 100 posiciones.
Llenar el orden inverso al indice.
Mostrar el arreglo en pantalla.

*/


int main(){

int vector[100];
int i=100, numero;

printf("\nIntroduzca un numero entero: ");
scanf( "%d", &numero );


while(i>=0){
    vector[i]=i;
    i--;
}

i=100;

while(i>=0){
    printf("vector[%d] = %d; \n", i, vector[i]);
    i--;
}

return 0;
}
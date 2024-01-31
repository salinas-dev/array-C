#include<stdio.h>
#include<stdlib.h>

/*
Ejercicio

Crear un programa que declare un arreglo llamado "vector" 
de 10 posiciones.
Asignar el valor de 10 a cada posicion
del arreglo.
Mostrar todas las posiciones del arreglo.

*/


int main(){

int vector[10];
int i=0;

while(i<10){
    printf("%d\n",vector[i]=10);
    i++;
}

i=0;

while(i<10){
    printf("vector[%d] = %d; \n", i, vector[i]);
    i++;
}

return 0;
}
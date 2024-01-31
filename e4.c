#include <stdio.h>
#include <stdlib.h>


/*
Ejercicio

Crea un arreglo de 20 posiciones.
Asígnale a cada elemento un valor.
Calcula el promedio de todos los
elementos.
Calcula la multiplicación de todos los
elementos.
*/

int main(){

   float vector[20];
   int i, suma, promedio;

   vector [0]=5;
   vector [1]=6;
   vector [2]=8;
   vector [3]=9;
   vector [4]=5;
   vector [5]=3;
   vector [6]=5;
   vector [7]=9;
   vector [8]=4;
   vector [9]=2;


   
   for (i=0; i<=9; i++){
        suma += vector[i];
    }
    promedio=suma/10;
    printf("La suma es: %d y el promedio es: %d",suma, promedio);

   return 0;
}
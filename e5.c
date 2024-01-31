#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio 5

Dados 
A = [3, 5, 6, 8, 4, 7, 8, 5, 3, 1]
B = [3, 4, 6, 8, 9, 1, 2, 3, 0, 9]

Realizar las siguientes operaciones
A[3] mod (B[2]/2)
B[A[1]] – A[9]
A[0] + A[1+2]
A[5] + B[5]
(A[3]/B[2])/2
*/

int main(){
    int opc1,opc2,opc3,opc4,opc5,opc6;  
    int A[10];
    A[0]=3;
    A[1]=5;
    A[2]=6;
    A[3]=8;
    A[4]=4;
    A[5]=7;
    A[6]=8;
    A[7]=5;
    A[8]=3;
    A[9]=1;

    int B[10];
    B[0]=3;
    B[1]=4;
    B[2]=6;
    B[3]=8;
    B[4]=9;
    B[5]=1;
    B[6]=2;
    B[7]=3;
    B[8]=0;
    B[9]=9;

    opc1=A[3]%(B[2]/2);
    opc2=B[A[1]]-A[9];
    opc3=A[0]+A[1+2];
    opc4=A[5]+B[5];
    opc5=A[5]+B[5];
    opc6=(A[3]/B[2])/2;


    printf("Operacion 1: %d\n", opc1);
    printf("Operacion 2: %d\n", opc2);
    printf("Operacion 3: %d\n", opc3);
    printf("Operacion 4: %d\n", opc4);
    printf("Operacion 5: %d\n", opc5);
    printf("Operacion 6: %d\n", opc6);


return 0;
}
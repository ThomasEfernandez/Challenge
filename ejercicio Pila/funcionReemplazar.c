#include <stdlib.h>
#include <stdio.h>
#include "pila.h"

void main (){




}

/*2)Escribir una función Reemplazar que tenga como argumentos una pila con tipo de elemento
int y dos valores int: nuevo y viejo de forma que si el segundo valor aparece en algún lugar de
la pila,sea reemplazado por el segundo.

*/

Pila Reemplazar (Pila A, int nuevo, int viejo){

Pila aux;
inicpila (&aux);


    while (!pilavacia (&A)){

        if (tope (&A)==viejo){
            desapilar (&A);
            apilar (&A,nuevo);

        }else{

          apilar(&aux, desapilar (&A));

        }

    }

    while (!pilavacia(&aux)){

        apilar (&A,desapilar (&aux));

    }
   

return A;
}




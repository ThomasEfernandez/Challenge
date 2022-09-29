#include <stdio.h>
#include <stdlib.h>
#include <lista.h>



void main (){



}


/*1)Implementar una función que recibe una lista de enteros L y un número entero n de forma
que modifique la lista mediante el borrado de todos los elementos de la lista que tengan este
valor*/



void BorrarEnteros (nodo** listaEnteros, int n){
    nodo* aux,*ant;
//si tiene datos
    if ((*listaEnteros)!=NULL){
// si esta al principio
        if ((*listaEnteros)->dato ==n){

            aux = (*listaEnteros);
            (*listaEnteros)=(*listaEnteros)->siguiente;
            free (aux);

        }else{

            ant = (*listaEnteros);
            aux =(*listaEnteros)->siguiente;
            //busco
            while (aux !=NULL && aux->dato !=n){
                ant = aux;
                aux =aux->siguiente;

            }
            //si encontre el dato,no esta al final, enlazo el anterior con el siguiente (de aux)
            if (aux->dato==n){
           ant->siguiente = aux->siguiente;      
            free (aux);          
        }

    }

}
}


//3)Construir una función que sume los elementos de una lista de enteros recursivamente



int sumaRecursiva (nodo** lista){
int suma;
// hay datos
    if ((*lista)!=NULL){
   
      return suma +  sumaRecursiva (&(*lista)->siguiente);
    }

return suma;
}

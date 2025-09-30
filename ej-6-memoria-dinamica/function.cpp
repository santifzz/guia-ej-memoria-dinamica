#include "function.h"
#include <iostream>

using namespace std;

int *contNumerosPares(int vec[],  int tam, int &nuevoTam){
    int contNumPar=0;
    int *vecAux;

    for(int i=0; i<tam; i++){
         if(vec[i]%2==0){
            bool repetido = false;
            for(int j=0; j<i; j++){
                if(vec[i]==vec[j]){
                    repetido=true;
                    break;
                }
            }

            if(repetido == false){
                contNumPar++;
            }
         }
    }

    vecAux = new int[contNumPar];
    int k=0;

    for(int i=0; i<tam; i++){
         if(vec[i]%2==0){
            bool repetido = false;
            for(int j=0; j<i; j++){
                if(vec[i]==vec[j]){
                    repetido=true;
                    break;
                }
            }

            if(repetido == false){
                vecAux[k++] = vec[i]; //primero guarda el valor en k=0, y despues suma +1
            }
         }
    }

    nuevoTam = contNumPar;

    return vecAux;
}

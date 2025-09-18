#include "functions.h"
#include <iostream>

using namespace std;

void cargarVector(int *v, int tam){
    for(int i=0; i<tam; i++){
        cout << "v[" << i << "]= " ;
        cin >> v[i];
    }
}

int contRepetidos(int *v, int tam){
    int cont=0;

    for(int i=0; i<tam; i++){
    bool repetido = false;

        //evaluo si se repitio
        for(int j=0; j<i; j++){
            if(v[i]==v[j]){
                repetido=true;
                break;
            }
        }


        if(repetido == false){
            for(int j = i + 1; j<tam; j++){
                if(v[i]==v[j]){
                    cont++;
                    break;
                }
            }
        }

    }
    return cont;
}

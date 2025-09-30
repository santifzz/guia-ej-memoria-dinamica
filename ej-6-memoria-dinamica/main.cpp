#include <iostream>
#include "function.h"

using namespace std;

int main()
{
    const int TAM=5;
    int vec[TAM];

    for(int i=0; i<TAM; i++){
        cout << "v[" << i << "] = " ;
        cin >> vec[i];
    }

    int nuevoTAM;
    int *pares = contNumerosPares(vec, TAM, nuevoTAM);

    cout << "Numeros pares distintos: " <<  endl;
    for(int i=0; i<nuevoTAM; i++){
        cout << pares[i]  << "\t";
    }

    delete []pares; // Liberamos memoria

    return 0;
}


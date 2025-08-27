#include <iostream>

using namespace std;

/*4
Hacer una función que reciba un vector de enteros y su tamaño y devuelva la cantidad de números distintos que se repiten en el vector.
*/

int contRepetidos(int *v, int tam);

int main()
{
    int *v, tam;
    cout << "Ingrese el tamaño del vector:" << endl;
    cin >> tam;
    v = new int[tam];

    for(int i=0; i<tam; i++){
        cout << "v[" << i << "]= " ;
        cin >> v[i];
    }

    cout << contRepetidos(v, tam) << endl;
    delete []v;
    return 0;
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

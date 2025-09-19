#include <iostream>
#include "functions.h"

using namespace std;

/*4
Hacer una funci�n que reciba un vector de enteros y su tama�o y devuelva la cantidad de n�meros distintos que se repiten en el vector.
*/

int main()
{
    int *v, tam;
    cout << "Ingrese el tama�o del vector:" << endl;
    cin >> tam;

    v = new int[tam]; ///pido memoria

    if(v==nullptr){ ///evaluo si hay espacio en la memoria
        cout << "No se pudo asignar memoria. . ." << endl;
        return -1;
    }

    cargarVector(v, tam);

    cout << contRepetidos(v, tam) << endl;

    delete []v; ///Devuelvo la memoria pedida
    return 0;
}


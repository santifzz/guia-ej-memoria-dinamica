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
    v = new int[tam];

    cargarVector(v, tam);

    cout << contRepetidos(v, tam) << endl;
    delete []v;
    return 0;
}


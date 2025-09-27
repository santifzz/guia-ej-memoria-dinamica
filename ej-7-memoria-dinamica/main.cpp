#include <iostream>
#include <cstring>

using namespace std;

void cargarLibros(string v[], int tam);
void mostrarLibros(string v[], int tam);
int mostrarMenu(int opcion);
void tiempoLectura(const string v[], int tam);

int main()
{
    int tam;
    int opc_elegida;
    string  *vec;
    cout << "Ingrese la cantidad de libros que desea cargar:  "<< endl;
    cin >>  tam;
    cin.ignore();
    system("cls");

    vec = new string[tam];

    if(vec == nullptr) exit(101);

    cargarLibros(vec, tam);

    while(true){
    opc_elegida = mostrarMenu(opc_elegida);

        switch(opc_elegida){
        case 1:
            mostrarLibros(vec, tam);
            system("pause");
            break;
        case 2:
            tiempoLectura(vec, tam);
            break;
        case 3:
            cout << "Case 3" << endl;
            break;
        case 4:
            break;
        }
    }
    delete []vec;
    return 0;
}

void cargarLibros(string v[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Ingrese el nombre del libro nro " << i+1 << endl;
        getline(cin, v[i]);
    }
}

void mostrarLibros(string v[], int tam){
    for(int i=0; i<tam; i++){
        cout << "Libro nro " << i+1 << "= " << v[i] << endl;
    }
}

int mostrarMenu(int opcion){
        system("cls");
        cout << "---------- MENU ----------" << endl;
        cout << "1. Mostrar listado." << endl;
        cout << "2.Tiempo de lectura." << endl;
        cout << "3.Ranking" << endl;
        cout << "4.Salir." << endl;
        cin >> opcion;

        return opcion;
}

void tiempoLectura(string v[], int tam){
     string vec_aux[tam];
    for(int i=0; i<tam; i++){
        cout << "Ingrese el nombre del libro: " ;
        getline(cin, vec_aux);
        if(vec_aux[i] == v[i]){
            cout << "Este libro ya existe" << endl;
        }
    }
}

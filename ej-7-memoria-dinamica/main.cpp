#include <iostream>
#include <cstring>

using namespace std;

void cargarLibros(string v[], int tam);
void mostrarLibros(string v[], int tam);
int mostrarMenu(int opcion);
void tiempoLectura(string v[], int tam);

int main()
{
    int tam;
    int opc_elegida;

    cout << "Ingrese la cantidad de libros que desea cargar:  "<< endl;
    cin >>  tam;
    cin.ignore();
    system("cls");

    string  *vec = new string[tam];
    int *vec_tiempo_lectura = new int[tam];

    if(vec == nullptr) exit(101);

    cargarLibros(vec, tam);
    system("cls");

    while(true){
    system("cls");
    opc_elegida = mostrarMenu(opc_elegida);

        switch(opc_elegida){
        case 1:
            system("cls");
            mostrarLibros(vec, tam);
            system("pause");
            break;
        case 2:
            tiempoLectura(vec, tam);
            system("pause");
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
        cout << "---------- MENU ----------" << endl;
        cout << "1. Mostrar listado." << endl;
        cout << "2.Tiempo de lectura." << endl;
        cout << "3.Ranking" << endl;
        cout << "4.Salir." << endl;
        cin >> opcion;

        return opcion;
}

void tiempoLectura(string v[], int tam){
    string libroBuscado;
    cin.ignore();
    cout << "Ingrese el nombre del libro a buscar: " ;
    getline(cin, libroBuscado);

    bool existe = false;

    for(int i=0; i<tam; i++){
        if(libroBuscado == v[i]){
            existe = true;
        }
    }
    if(existe == true){
        cout << "Este libro ya existe" << endl;
    } else {
        cout << "Este libro no existe" << endl;
    }
}

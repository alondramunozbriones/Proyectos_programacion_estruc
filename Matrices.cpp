/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 15
Fecha: 02 de Marzo del 2026
Propósito: Dinámica de matrices con C++
*/

//Bibliotecas
#include<iostream>
#include<ctime>
using namespace std;

//Declaración de funciones
int tamañoMatriz();
void mostrarMatriz(int matriz[10][10], int n);
void llenadoUsuario(int matriz[10][10], int n);
void llenadoAleatorio(int matriz[10][10], int n);

//main
int main() {
    char continuar;
    int opcion;
    int matriz[10][10]; //Maximo permitido

    do {
        cout << "*** Bienvenido al programa :) ***" << endl;
        cout << "** Llenado de una matriz **" << endl;
        int tamano = tamañoMatriz();

        //Menú
        cout << "\n\n ** Menú: Formas de llenado de matriz ** " << endl;
        cout << " 1. Llenado manual (uno por uno)" << endl;
        cout << " 2. Llenado aleatorio" << endl;
        cout << "¿Cuál forma de llenado prefieres utlilizar? = " << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Tamaño solicitado: " << tamano << endl;
                cout << "Llenado de uno por uno" << endl;
                llenadoUsuario(matriz, tamano);
                mostrarMatriz(matriz, tamano);
                break;
            case 2:
                cout << "Tamaño solicitado: " << tamano << endl;
                cout << "Llenado aleatorio" << endl;
                llenadoAleatorio(matriz, tamano);
                mostrarMatriz(matriz, tamano);
                break;
            default:
                cout << "Error: opcion invalida" << endl;
        }

        cout << "\n\n Presiona Y para continuar" << endl;
        cout << " Presiona N para salir" << endl;
        cout << " " << endl;
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');
    cout << "End XD" << endl;
    cout << "Gracias por usar mi programa :)" << endl;

    return 0;
}//Fin main

//Función para solicitar tamaño de matriz al usuario
//Con un rango de 3 a 10
int tamañoMatriz() {
    int n;
    do {
        cout << "\n\n Nota: El tamaño de la matriz debe ser entre 3 y 10" << endl;
        cout << "Ingrese el tamaño de la matriz: " << endl;
        cin >> n;
        if ( n < 3 || n > 10) {
            cout << "Tamaño inválido :( debe ser entre 3 y 10" << endl;
        }
    }while (n < 3 || n > 10);
    return n;
}

//Funcion para ingresar los valores uno por uno
void llenadoUsuario(int matriz[10][10], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "Introduce el valor para [" << i << "][" << j << "]: " << endl;
            cin >> matriz[i][j];
        }
    }
}

//Funcion para llenado aleatorio
void llenadoAleatorio(int matriz[10][10], int n) {
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100; //Valores entre 0 y 99
        }
    }
}

//Funcion para mostrar la matriz
void mostrarMatriz(int matriz[10][10], int n) {
    cout << "\n Matriz: \n " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 10
Fecha: 11 de Febrero del 2026
Propósito: Programa multiplos del 3 y 5 con C++
*/

#include<iostream>
using namespace std;

//Declaración de funciones

void prn(int num);
int mul3(int n);
int suma3(int n);
int mul5(int n);
int suma5(int n);

//main
int main() {
    int num;
    char continuar;

    do {
        cout << "\n Ingresa un número del 0 al 1000: ";
        cin >> num;
        while (num < 0 || num > 1000) {
            cout << "\n Error: número invalido :( ";
            cout << "\n Ingresa nuevamente un número del 0 al 1000: ";
            cin >> num;
        }

        cout << "\n Cantidad de multiplos del 3: " << mul3(num);
        cout << "\n La suma de los multiplos del 3 es: " << suma3(num);

        cout << "\n\n Cantidad de multiplos del 5: " << mul5(num);
        cout << "\n La suma de los multiplos del 5 es: " << suma5(num);

        cout << "\n\n  Presione (Y) para continuar ";
        cout << "\n Presione (N) para salir ";
        cout << "\n ";
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');
    return 0;
}//Fin main

//Definicion de funciones
// Imprime números enteros
void prn(int num) {
    cout << num;
}

//Funcion multiplos del 3
int mul3(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            cont++;
        }
    }
    return cont;
}

//Funcion suma de multiplos del 3
int suma3(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            suma = suma + i;
        }
    }
    return suma;
}

//Funcion multiplos del 5
int mul5(int n) {
    int cont = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cont++;
        }
    }
    return cont;
}

//Funcion suma de los multiplos del 5
int suma5(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            suma = suma + i;
        }
    }
    return suma;
}
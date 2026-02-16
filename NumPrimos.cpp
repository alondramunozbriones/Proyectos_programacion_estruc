/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 10
Fecha: 11 de Febrero del 2026
Propósito: Programa multiplos del 3 y 5 con C++
*/

#include<iostream>
#include<string>
using namespace std;

//Declaracion de funciones
bool esPrimo(int n);
int NumPrimo(int lim);

//Main
int main() {
    int lim;
    char continuar;

    do {
        cout << "\n Ingresa un número del 2 al 100: ";
        cin >> lim;

        NumPrimo(lim);

        cout << "\n\n  Presione (Y) para continuar ";
        cout << "\n Presione (N) para salir ";
        cout << "\n ";
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');
    return 0;
}//Fin main

//Definicion de funciones
//Funcion para verificar si es un número primo
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int d = 2; d < n; d++) {
        if (n % d == 0) return false;
    }
    return true;
}

//Funcion Numero Primo
int NumPrimo(int lim) {
    int suma = 0;
    string expresion = "";
    for (int i = 2; i < lim; i++) {
        if (esPrimo(i)) {
            suma += i;

            if (expresion.empty()) {
                expresion = to_string(i);
            } else {
                expresion += " + " + to_string(i);
            }
        }
    }
    cout << "\n Expresion de la suma: " << expresion;
    cout << "\n Suma de numeros Primos: " << suma;

    return suma;
}
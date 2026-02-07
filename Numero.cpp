/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 7
Fecha: 04 de Febrero del 2026
Propósito: Programa que pide un número al usuario  con C++
*/

#include <iostream>
using namespace std;

int main() {
    int x;
    int cont = 0;
    char continuar;

    do {
        cout << "Ingrese un número:\n ";
        cin >> x;

        if (x > 0 && x < 500) {
            for (int i = 0; i < 100; i++) {
                x += 5;
                cout << "Valor actual:\n " << x << endl;
            }
            cont++;
        }
        else if (x > 500 && x < 1000) {
            for (int i = 0; i < 50; i++) {
                x += 10;
                cout << "Valor actual:\n " << x << endl;
            }
            cont++;
        }
        else if (x > 1000) {
            cout << "No se puede calcular el valor\n ";
        }
        else {
            cout << "Número invalido\n ";
        }
        cout << "¿Desea terminar el programa? S/N: ";
        cin >> continuar;
    } while (continuar == 's' && continuar == 'S');
    cout << "Total de operaciones: " << cont << endl;
    cout << "Fin de programa :) ";

    return 0;
}
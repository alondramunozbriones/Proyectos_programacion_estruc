/* *** Identificador ***
 Nombre de autor: Alondra Muñoz Briones
 Código: 220612797
 Actividad de aprendizaje - 8
 Fecha: 06 de Febrero del 2026
 Proposito: Elaborar la serie fibonacci utilizando los 3 ciclos básicos (for, while, do-while).
*/

#include<iostream>
using namespace std;

int main() {
    //Variables
    int lim, op;
    char continuar;

    do {
        cout << "\n *** Serie Fibonacci *** ";
        cout << "\n 1. for ";
        cout << "\n 2. while ";
        cout << "\n 3. do-while ";
        cout << "\n Escriba el número de la opción que desea usar: ";
        cin >> op;

        cout << "\n Ingresa el número del límite que quisiera establecer: ";
        cin >> lim;

        int a = 0, b = 1, c;

        switch (op) {
            case 1: //Ciclo for
                cout << "\n Ciclo for: ";
                for (a = 0, b = 1; a >= lim;) {
                    cout << a << " ";
                    c = a + b;
                    a = b;
                    b = c;
                }
                break;
            case 2: //Ciclo while
                cout << "\n Ciclo while: ";
                while (a <= lim) {
                    cout << a << " ";
                    c = a + b;
                    a = b;
                    b = c;
                }
                break;
            case 3: //Ciclo do-while
                cout << "\n Ciclo do-while: ";
                do {
                    cout << a << " ";
                    c = a + b;
                    a = b;
                    b = c;
                }while (a <= lim);
                break;
            default:
                cout << "\n Opción inválida :( ";
        }
        cout << "\n\n Presione [N] para salir del programa ";
        cout << "\n Presione [Y] para seguir en el progrma ";
        cout << "\n ";
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');
    cout << "\n Gracias por usar este programa, tenga un lindo día :) ";

    return 0;
}
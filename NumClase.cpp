/* Trabajo en clase sobre la tarea */

// bibliotecas de funciones = librerias
#include <iostream>
using namespace std;

//main
int main() {
    //varibles
    bool ciclo = true;
    char op;
    int num = 0;

    cout << "Introducción al programa";

    //iniciar ciclo
    while (ciclo) {
        int cont = 0;
        cout << "Ingrese un número mayor a 0 y menor a 1000: ";
        cin >> num;
        if (num <= 0 || num >= 1000) {
            cout << "No puedo calcular ese valor";
        } // if en caso de que el numero sea menor a 0 o mayor 1000
        else if (num > 0 && num <= 500) {
            for (int i=0; i<100; i++) {
                cout << num << " \t ";
                cont ++;
                num += 5;
            } //Fin for
        } //if menor a 500
        else {
            for (int i=0; i<50; i++) {
                cout << num << " \t ";
                cont ++;
                num += 10;
            } //Fin for
        } //Fin else

        //Imprimir el contador
        if (cont >= 1) {
            cout << " \n Tu operacion termino en: " << cont << " ciclos ";
        }
        cout << "Presiona (N) para salir o cualquier tecla para seguir: ";
        cin >> op;
        if (op == 'N' || op == 'n') {
            cout << "Gracias por usar mi programa :) ";
            ciclo = false;
        }
    } //Fin cilo while
} //Fin main
/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 5
Fecha: 04 de Febrero del 2026
Propósito: Programa usar 6 caracteres especiales con C++
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre;
    int x, y;

    cout << "\t *** Datos de un gamer ***" << endl;
    cout << "\n Cuál es tu nombre de usuario \? " << endl;
    cin >> nombre;
    cout << "\n Qué nivel eres de Fortnite \?" << endl;
    cin >> x;
    cout << "\n Del 1 al 10 qué tanto te gusta Fortinte\?" << endl;
    cin >> y;

    cout << "\r Nombre de usuario: " << nombre << endl;
    cout << "\b Nivel: " << x << endl;
    cout << " \"Calificaión\": " << y << endl;

return 0;
}



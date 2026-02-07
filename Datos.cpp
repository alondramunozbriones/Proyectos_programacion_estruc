/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 5
Fecha: 03 de Febrero del 2026
Propósito: Programa que muestra los siguientes datos con C++
Nombre
Edad
Lugar de residencia
Fecha
Carrera
Semestre
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string nombre = "Alondra";
    int edad = 20;
    string residencia = "Tepatitlán de Morelos, Jalisco";
    string fecha = "03/02/2026";
    string carrera = "Ingeniería en Computación";
    int semestre = 2;

    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Lugar de residencia: " << residencia << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Carrera: " << carrera << endl;
    cout << "Semestre: " << semestre << endl;

    return 0;
}

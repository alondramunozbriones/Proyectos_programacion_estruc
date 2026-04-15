/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 20
Fecha: 15 de Abril del 2026
Propósito: Juego de las torres de Hanoi con C++
*/

/*
 1. Dar la bienvenida y mostrar cuál es el proposito del programa.
 2. Preguntar al usario que cantidad de discos desea usar dentro del rango de 3 a 7 discos.
 3. El nucleo del programa debe ser una unica funcion recursiva que gestione los movimientos.
 4. Esta funcion debe mostrar la cantidad de movimiento y los movimientos finales.
 5. Cuando finalice se bebe preguntar al usario si quiere continuar o salir del programa.
 */

//Blibiotecas
#include<iostream>
#include<cmath>
using namespace std;

// Declaracion de funciones
void TorresHanoi(int elementos, char a, char b, char c);


int main() {
 char continuar;
 int discos;

 do {
  cout << "*** Bienvenido al programa ***" << endl;
  cout << "Las Torres de Hanoi" << endl;

  cout << "\n El rango de discos debe ser de 3 a 7 discos " << endl;
  cout << "Ingresa el la cantidad de discos: " << endl;
  cin >> discos;

  while (discos < 3 || discos > 7) {
   cout << "\n Error valor invalido: debe ser un numero entre o igual a 3 y 7: " << endl;
   cin >> discos;
  }

  TorresHanoi(discos, 'A', 'B', 'C');
  cout << "Numero de movimientos total: " << pow(2, discos) -1 << endl;

  cout << "\n Presione Y para continuar" << endl;
  cout << "Presine N para salir" << endl;
  cout << " " << endl;
  cin >> continuar;
 }while (continuar == 'Y' || continuar == 'y');

 cout << "\n --The end XD--" << endl;
 cout << "Gracias por usar mi programa :)" << endl;
}

// Funcion
// Esta es una versión iterativa. Hace que el numero total de movimientos es 2 a la elementos - 1.
// En cada movimiento se mueve siempre el disco más pequeño.
void TorresHanoi(int elementos, char a, char b, char c) {
 static int movimiento = pow(2, elementos) - 1;

// Esto hace que si el numero de discos es par se intercambia la torre c y la torre b.
  if (elementos % 2 == 0) {
   swap(c, b);
  }

  for (int i = 1; i <= movimiento; i++) {
   if (i % 3 == 1) {
    cout << "Mover disco entre " << a << " y " << c << endl;
   } else if (i % 3 == 2) {
    cout << "Mover disco entre " << a << " y " << b << endl;
   } else {
    cout << "MOver disco entre " << b << " y " << c << endl;
   }
  }

}
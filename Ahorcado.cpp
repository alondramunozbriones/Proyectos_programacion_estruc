/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 21
Fecha: 16 de Abril del 2026
*/

/*
1. Hacer una lista interna de palabras o que permita al usuario ingresar la palabra.
2. Se debe mostrar el tamaño de la palabra mediante guones bajos, para saber cuantas letras tiene la palabra.
3. Se debe solicitar al usuario una letra en cada turno.
4. Se tiene que llevar el conteo de intentos fallidos (6 o 7), e ir mostrando el ahorcado.
5. Se deben mostrar las letras que ya han sido adivinadas y las que han fallado.
6. Mostrar dibujo o tablero.
7. Preguntar al usario si desea continuar o salir.
Videos de referencia:
https://www.youtube.com/watch?v=QKv2uBchwE0
https://www.youtube.com/watch?v=smFGH95Xe1s
 */

//Bibliotecas
#include<iostream>
#include<string>
#include<vector>
#include<ctime>
using namespace std;

//Declaracion de funciones
string palabra();
void mostrarEstado(string palabraOculta, int intentos, string letrasFallidas);
bool actualizarPalabra(string palabraSecreta, string &palabraOculta, char letra);

int main() {
char continuar;
 srand(time(0));

 do {
  string palabraSecreta = palabra();
  string palabraOculta(palabraSecreta.length(), '_');
  int intentos = 6;
  string letrasFallidas = "";
  bool ganado = false;

  cout << "*** Bienvenido al programa ***" << endl;
  cout << "Juego del Ahorcado" << endl;
  cout << "Super Heroes Marvel" << endl;

  while (intentos > 0 && !ganado) {
   mostrarEstado(palabraOculta, intentos, letrasFallidas);

   char letra;
   cout << "\nIntroduce una letra: ";
   cin >> letra;
   letra = tolower(letra);

   if (!isalpha(letra)) {
    cout << "Por favor introduce una letra válida. " << endl;
    continue;
   }

   if (actualizarPalabra(palabraSecreta, palabraOculta, letra)) {
    cout << "¡Bien hecho!" << endl;
   } else {
    if (letrasFallidas.find(letra) == string::npos) {
     cout << "Letra incorrecta." << endl;
     intentos--;
     letrasFallidas += letra;
     letrasFallidas += " ";
    } else {
     cout << "Ya intentaste con esa letra. " << endl;
    }
   }

   if (palabraOculta == palabraSecreta) {
    ganado = true;
   }
  }

  if (ganado) {
   cout << "\n¡Felicidades! Adivinaste: " << palabraSecreta << endl;
  } else {
   cout << "\nPerdiste. La palabra era: " << palabraSecreta << endl;
  }

  cout << "\n Presiona Y para continuar" << endl;
  cout << "Presiona N para salir" << endl;
  cout << " ";
  cin >> continuar;
 } while (continuar == 'Y' || continuar == 'y');

 cout << "--- The end XD ---" << endl;
 cout << "Gracias por usar mi programa" << endl;
}

// Funciones
string palabra() {
 vector<string> palabra = {"spiderman", "ironman", "blackwidow", "thor", "capitanamerica", "hawkeye", "hulk"};
 return palabra[rand()%palabra.size()];
}

void mostrarEstado(string palabraOculta, int intentos, string letrasFallidas) {
 cout << "\nPalabra: ";
 for (char c : palabraOculta) cout << c << " ";
 cout << "\nIntentos restantes: " << intentos;
 cout << "\nLetras fallidas: " << letrasFallidas << endl;
}

bool actualizarPalabra(string palabraSecreta, string &palabraOculta, char letra) {
 bool acierto = false;
 for (int i = 0; i < palabraSecreta.length(); i++) {
  if (palabraSecreta[i] == letra) {
   palabraOculta[i] = letra;
   acierto = true;
  }
 }
 return acierto;
}

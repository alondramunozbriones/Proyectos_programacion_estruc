/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 14
Fecha: 25 de Febrero del 2026
Propósito: Programa que analizador de
palíndromos y capicúas con C++
*/

//Bibliotecas
#include<iostream>
#include<string> //Para cadenas
#include<cctype> //Para función tolower
using namespace std;

//Declaración de funciones
void IngresoPS(string& texto, string& num);
string ConvertirMinus(string texto);
string EliminaEspacio(string texto);
bool palindromo(string texto);
bool capicua(string num);

//main
int main() {
    string texto;
    string num;
    char continuar;
    do {
        cout << "*** Bienvenido al Programa :) ***" << endl;
        cout << "**  Analizador de Palíndromos y Capicúas **" << endl;

        IngresoPS(texto,num);
        ConvertirMinus(texto);
        EliminaEspacio(texto);

        cout << "\n\n * Verdadero: 1" << endl;
        cout << " * Falso: 0" << endl;
        cout << "Es Palíndromo: " << palindromo(texto) << endl;
        cout << "Es Capicúa: " << capicua(num) << endl;

        cout << "\n\n Preiona Y para continuar " << endl;
        cout << " Presiona N para salir " << endl;
        cout << " " << endl;
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');
    cout << "Fin de programa" << endl;
    cout << "Gracias por usar mi programa :)" << endl;
    return 0;
}

//Función registrar palabra o secuencia
void IngresoPS(string& texto, string& num) {
    cout << "\n\n Ingrese una palabra o frase: " << endl;
    cin >> texto;
    cout << " Ingrese una secuencia de números: " << endl;
    cin >> num;
    cout << "Tu palabra o frase es: " << texto << endl;
    cout << "Tu secuencia de números es: " << num << endl;
}

//Función para convertir en minusculas
string ConvertirMinus(string texto) {
    int i;
    for (i = 0; i < texto.length(); i++) {
        //El tolower toma un caracter y lo devuelve en minusculas si es posible
        //Maneja mejor el estándar
        texto[i] = tolower(texto[i]);
    }
    return texto;
}

//Función eliminar espacios
string EliminaEspacio(string texto) {
    string sinEspacio; //Cadena donde acumularemos los caracteres válidos
    for (int i = 0; i < texto.length(); i++) {
        //Se verifica si el caracter no es un espacio
        //Se usa '' para comparar los caracteres individuales
        if (texto[i] != ' ') {
            //Se concatena los caracteres a la nueva cadena
            sinEspacio += texto[i];
        }
    }
    return sinEspacio;
}

//Función palíndromo
bool palindromo(string texto) {
    texto = ConvertirMinus(texto);
    texto = EliminaEspacio(texto);

    int inicio = 0;
    int fin = texto.length() - 1;
    //Son dos punteros que revisan de inicio a fin hasta encontrarse en el centro y verificar si es palíndromo
    while (inicio < fin) {
        if (texto[inicio] != texto[fin]) {
            return false;//Si se encuentra una diferencia no es palíndromo
        }
        inicio++; //Incrementa
        fin--; //Decrementa
    }
    return true; //Si es simétrico entonces es palíndromo
}

//Función capicúa
bool capicua(string num) {

    int inicio = 0;
    int fin = num.length() - 1;

    while (inicio < fin) {
        if (num[inicio] != num[fin]) {
            return false;
        }
        inicio++;
        fin--;
    }
    return true;
}
/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 13
Fecha: 18 de Febrero del 2026
Propósito: Programa que analiza cadenas de texcto con C++
Aplica los conceptos de estructura, manipulación de arreglos
de caracteres y el uso de funciones para procesar y analizar
información ingresada por el usuario.
*/

#include<iostream>
#include<string> //Biblioteca para cadenas
#include<cctype> //Biblioteca para tolower()
using namespace std;

//Declaración de funciones
void Ctexto(string& texto);
int contarVocales(const string& texto);
int contarConsonants(const string& texto);
int contarNumeros(const string& texto);
int contarPalabras(const string& texto);

//main
int main() {
    string fp;
    char continuar;
    do {
        Ctexto(fp);
        cout << "Cantidad de vocales: " << contarVocales(fp) << endl;
        cout << "Cantidad de consonantes: " << contarConsonants(fp) << endl;
        cout << "Cantidad de números: " << contarNumeros(fp) << endl;
        cout << "Cantidad de palabras: " << contarPalabras(fp) << endl;

        cout << "\n\n Presione (Y) para continuar";
        cout << "\n Presione (N) para salir";
        cout << "\n ";
        cin >> continuar;
        cin.ignore();
    }while (continuar == 'Y' || continuar == 'y');

    cout << "\n Fin del programa";
    cout << "\n Gracias por usar mi programa :)";
    return 0;
}//fin main

//Definición de funciones
//Funcion introducción de frase o palabra
void Ctexto(string& texto) {
    cout << "Introduce una frase o palabra: " << endl;
    getline(cin, texto);
    cout << "Tu frase o palabra es: " << texto << endl;
    cout << "Cantidad de caracteres: " << texto.length() << endl; //Contador de caracteres
}

//Función para contar vocales
int contarVocales(const string& texto) {
    int contador = 0;
    string vocales = "aeiou";
    for (char c : texto) {
        //Convierte en minusculas
        if (vocales.find(tolower(c)) != string::npos) {
            contador++;
        }
    }
    return contador;
}

//Función para contar las consonantes
int contarConsonants(const string& texto) {
    int contador = 0;
    string consonants = "bcdfghjklmnñpqrstvwxyz";
    for (char c : texto) {
        if (consonants.find(tolower(c)) != string::npos) {
            contador++;
        }
    }
    return contador;
}

//Función para contar palabras
int contarPalabras(const string& texto) {
    int contador = 0;
    bool palabra = false;
    for (char c : texto) {
        if (isspace(c)) {
            palabra = false;
        } else {
            if (!palabra) {
                contador++;
                palabra = true;
            }
        }
    }
    return contador;
}


//Función para contar números en la cadena
int contarNumeros(const string& texto) {
    int contador = 0;
    string numeros = "1234567890";
    for (char c : texto) {
        if (isdigit(c)) {
            contador++;
        }
    }
    return contador;
}




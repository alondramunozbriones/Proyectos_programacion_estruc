/* *** Identificador ***
Nombre de autor: Alondra Muñoz Briones
Código: 220612797
Actividad: Actividad de aprendizaje 19
Fecha: 30 de Marzo del 2026
Propósito: Conversor Numerico Universal Interactivo con C++
Binario, Octal, Decimal y Hexadecimal
*/
// Dar la bienvenida y mostrar cuál es el proposito del programa.
// Hacer un menú sobre de valor desea ingresar y a cuál desea convertir.
// Ingreso del numero.
// Validacion de que el numero ingresado sea correcto.
// Convertir el valor ingresado a decimal, para que sea más facil la convercion.
// Hacer funcion de divisiones repetitivas con un ciclo
// Hacer que el ultimo resultado de las divisiones se acomode de izquierda a derecha y despues seguir con todos los sobrantes también de izquierda a derecha.
// Imprimir valor ingresado y el valor por el que se convirtio.
// Preguntar al usuario si desea continuar o terminar el programa.

//Bibliotecas
#include<iostream>
#include<string>
#include<cmath> // Biblioteca necesaria para pow()
#include<algorithm>
#include<vector>
using namespace std;

//Declarción de funciones
int menu2();
long long BaD(const string& numero); // Función de conversion de binario a decimal
long long OaD(const string& numero); // Función conversion de Octal a decimal
long long Decimal(const string& numero); // Función que convierte el número decimal a long long directamente
long long HaD(const string& numero); // Función conversion de Hexadecimal a Decimal

string convertidor(long long numero, int base); // Función conversion decimal a cualquier otra base numerica

bool esBinario(const string& numero); // Función para validar que sea binario
bool esOctal(const string& numero); // Función para validar que sea octal
bool esDecimal(const string& numero); // Función para validar que sea decimal
bool esHexadecimal(const string& numero); // Función para validar que sea hexadecimal

//Main
int main() {
    char continuar;
    int opcion, base;
    string numero;
    long long num;

    do {
        cout << "*** Bienvenido al programa :) ***" << endl;
        cout << "Convertidor Numerico Universal Interactivo" << endl;

        do {
            cout << "** Menú: Que numero desea ingresar **" << endl;
            cout << "1. Numero Binario" << endl;
            cout << "2. Numero Octal" << endl;
            cout << "3. Numero Decimal" << endl;
            cout << "4. Numero Hexadecimal" << endl;
            cout << "¿Que tipo de numero desea ingresar? = " << endl;
            cin >> opcion;
        }while (opcion < 1 || opcion > 4);
        switch (opcion) {
            case 1:
                cout << "\n Numero Binario" << endl;
                cout << "Ingresa un numero binario: " << endl;
                cin >> numero;

                if (!esBinario(numero)) {
                    cout << "Error: el numero ingresado no es binario." << endl;
                } else {
                    num = BaD(numero); // Se guarda el valor decimal
                    cout << "Conversion a Decimal: " << BaD(numero) << endl;

                    cout << "Ahora elige a qué lo quieres convertir: " << endl;
                    int destino = menu2();
                    if (destino == 2) {
                        base = 8;
                        cout << "Conversion a Octal: " << convertidor(num, base) << endl;
                    } else if (destino == 3) {
                        cout << "Conversion a Decimal: " << BaD(numero) << endl;
                    } else if (destino == 4) {
                        base = 16;
                        cout << "Conversion a Hexadecimal: " << convertidor(num,base) << endl;
                    }
                }
                break;
            case 2:
                cout << "\n Numero Octal" << endl;
                cout << "Ingrese número octal: " << endl;
                cin >> numero;

                if (!esOctal(numero)) {
                    cout << "Error: el numero ingresado no es Octal. " << endl;
                } else {
                    num = OaD(numero);
                    cout << "Conversion a decimal: " << OaD(numero) << endl;

                    cout << "Ahora elige a qué lo quieres convertir: " << endl;
                    int destino = menu2();
                    if (destino == 1) {
                        base = 2;
                        cout << "Conversion a Binario: " << convertidor(num,base) << endl;
                    } else if (destino == 3) {
                        cout << "Conversion a Decimal: " << OaD(numero) << endl;
                    } else if (destino == 4) {
                        base = 16;
                        cout << "Conversion a Hexadecimal: " << convertidor(num,base) << endl;
                    }
                }
                break;
            case 3:
                cout << "\n Numero Decimal" << endl;
                cout << "Ingrese el numero decimal: " << endl;
                cin >> numero;

                if (!esDecimal(numero)) {
                    cout << "Error: el numero ingresado no es Decimal. " << endl;
                } else {
                    num = Decimal(numero);
                    cout << "Conversion a decimal: " << Decimal(numero) << endl;

                    cout << "Ahora elige a qué lo quieres convertir: " << endl;
                    int destino = menu2();
                    if (destino == 1) {
                        base = 2;
                        cout << "Conversion a Binario: " << convertidor(num,base) << endl;
                    } else if (destino == 2) {
                        base = 8;
                        cout << "Conversion a Octal: " << convertidor(num,base) << endl;
                    } else if (destino == 4) {
                        base = 16;
                        cout << "Conversion a Hexadecimal: " << convertidor(num,base) << endl;
                    }
                }
                break;
            case 4:
                cout << "\n Numero Hexadecimal" << endl;
                cout << "Ingrese el numero hexadecimal: " << endl;
                cin >> numero;

                if (!esHexadecimal(numero)) {
                    cout << "Error: el numero ingresado no es Decimal. " << endl;
                } else {
                    num = HaD(numero);
                    cout << "Conversion a decimal: " << HaD(numero) << endl;

                    cout << "Ahora elige a qué lo quieres convertir: " << endl;
                    int destino = menu2();
                    if (destino == 1) {
                        base = 2;
                        cout << "Conversion a Binario: " << convertidor(num,base) << endl;
                    } else if (destino == 2) {
                        base = 8;
                        cout << "Conversion a Octal: " << convertidor(num,base) << endl;
                    } else if (destino == 3) {
                        cout << "Conversion a Decimal: " << HaD(numero) << endl;
                    }
                }
                break;
            default:
                cout << "\n Error: opcion invalida :(" << endl;
        }

        cout<<"\n\n Presione Y para continuar " << endl;
        cout << "Presine N para salir " << endl;
        cout << " " << endl;
        cin >> continuar;
    }while (continuar == 'Y' || continuar == 'y');

    cout << "\n\n Fin del programa :(" << endl;
    cout << "Gracias por usar mi programa XD" << endl;
}

//Funciones de validación
//Validacion para que la cadena sea binaria
bool esBinario(const string& numero) {
    for (char c : numero) {
        if (c != '0' && c != '1') return false;
    }
    return true;
}

//Validacion para numero octal
bool esOctal(const string& numero) {
    for (char c : numero) {
        if (c < '0' || c > '7') return false;
    }
    return true;
}

//Validacion para numero decimal
bool esDecimal(const string& numero) {
    for (char c : numero) {
        if (c < '0' || c > '9') return false;
    }
    return true;
}

//Validacion para numero hexadecimal
bool esHexadecimal(const string& numero) {
    for (char c : numero) {
        if (!isdigit(c) && !(c >= 'A' && c <= 'F') && !(c >= 'a' && c <= 'f'))
            return false;
    }
    return true;
}

//Funcion menu a que se convertiria
int menu2() {
    int opcion;
    do {
        cout << "** Menu de Conversiones **" << endl;
        cout << "1. Binario" << endl;
        cout << "2. Octal" << endl;
        cout << "3. Decimal" << endl;
        cout << "4. Hexadecimal" << endl;
        cout << "¿A que tipo de numero lo deseas convertir? = " << endl;
        cin >> opcion;
    } while (opcion < 1 || opcion > 4);
    return opcion;
}

// Convertidor de binario a decimal
long long BaD(const string& numero) {
    long long decimal = 0;
    int base = 1;
    int longitud = numero.length();

    // Recorrer la cadena de derecha a izquierda
    for (int i = longitud - 1; i >= 0; i--) {
        // Convertir caracter a valor entero
        if (numero[i] == '1')
            decimal += base;
        base = base * 2;
    }
    return decimal;
}

// Octal a decimal
long long OaD(const string& numero) {
    int decimal = 0;
    int longitud = numero.length();
    for (int i = 0; i < longitud; i++) {
        int digito = numero[longitud - 1 - i] - '0';
        decimal += digito * pow(8, i);
    }
    return decimal;
}

// Decimal
long long Decimal(const string& numero) {
    return stoll(numero);
}

// Conversión de Hexadecimal a Decimal
long long HaD(const string& numero) {
    long long decimal = 0;
    int longitud = numero.length();
    for (int i = 0; i < longitud; i++) {
        char c = numero[longitud - 1 - i];
        int valor;
        if (isdigit(c)) valor = c - '0';
        else if (c >= 'A' && c <= 'F') valor = 10 + (c - 'A');
        else valor = 10 + (c - 'a');
        decimal += valor * pow(16, i);
    }
    return decimal;
}

// Convertidor a cualquier base numerica con divisiones sucesivas
string convertidor(long long numero, int base) {
    if (numero == 0) return "0";
    if (base < 2 || base > 36) return "Base inválida";

    string caracteres = "0123456789ABCDEF";
    string resultado = "";

    while (numero > 0) {
        resultado += caracteres[numero % base]; // Obtener residuo y mapear a caracter
        numero /= base; // Siguiente cociente [6, 8]
    }

    reverse(resultado.begin(), resultado.end()); // Orden inverso
    return resultado;
}
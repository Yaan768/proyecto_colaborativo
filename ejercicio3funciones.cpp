#include <iostream>
using namespace std;

// Función que determina si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false; 
    }
    if (num ==2) {
        return true; 
    }
    if (num % 2 == 0) {
        return false; 
    }

    for (int i = 2; i * i <= num; ++i) { 
        if (num % i == 0) {
            return false; 
        }
    }
    return true; 
}

int main() {
    int numero;
    cout << "============================" << endl;
    cout << "VERFICADOR DE NUMEROS PRIMOS" << endl;
    cout << "============================" << endl;
    cout << "Este programa verifica si un numero es primo." << endl;
    
    
    cout << "Ingresa un numero entero : ";
    cin >> numero;

    if (!cin) {
        cout << "Entrada no válida. Por favor, ingresa un número entero." << endl;
        return 1;
    } else {
        cout << "\nProcesando el número " << numero << "..." << endl;
    }

    if (esPrimo(numero)) {
        cout << "El número " << numero << " es primo." << endl;
    } else {
        cout << "El número " << numero << " no es primo." << endl;
    }

    cout << "\nGracias por usar el verificador de numeros primos." << endl;
    cout << "============================" << endl;
    cout << "Fin del programa." << endl;
    cout << "============================" << endl;

    return 0;
}
#include <iostream>
using namespace std;

// Función que determina si un número es primo
bool esPrimo(int num) {
    if (num <= 1) {
        return false; // Los números menores o iguales a 1 no son primos
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
    
    cout << "Introduce un número: ";
    cin >> numero;

    if (esPrimo(numero)) {
        cout << "El número " << numero << " es primo." << endl;
    } else {
        cout << "El número " << numero << " no es primo." << endl;
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    float soles, tipoC, dolares;
    
    //ENTRADA
    cout << "Ingrese la cantidad en soles: ";
    cin >> soles;

    cout << "Ingrese el tipo de cambio: ";
    cin >> tipoC;

    // VALIDACION Y PROCESO
    if (tipoC <= 0) {
        cout << "Error: El tipo de cambio debe ser mayor que cero." << endl;//SALIDA
    } else {
        dolares = soles / tipoC;
        cout << "La cantidad en dolares es: $" << dolares << endl;//SALIDA
    }

    return 0;
}


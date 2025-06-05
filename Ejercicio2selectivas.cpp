#include <iostream>
using namespace std;

int main() {
    float soles, tipoC, dolares;
    cout << "Ingrese la cantidad en soles: ";
    cin >> soles;
    cout << "Ingrese el tipo de cambio: ";
    cin >> tipoC;
    dolares = soles / tipoC;
    cout << "La cantidad en dolares es: $" << dolares << endl;
    return 0;
}

#include <iostream>
using namespace std;

double calcularCreditoAumentado(int tipoTarjeta, double creditoActual) {
    double porcentajeAumento;

    // Determinar el porcentaje de aumento seg�n el tipo de tarjeta
    switch (tipoTarjeta) {
        case 1:
            porcentajeAumento = 0.25; // 25%
            break;
        case 2:
            porcentajeAumento = 0.35; // 35%
            break;
        case 3:
            porcentajeAumento = 0.40; // 40%
            break;
        default:
            porcentajeAumento = 0.50; // 50% para otros
            break;
    }

    // Calcular el nuevo cr�dito con el aumento
    return creditoActual + (creditoActual * porcentajeAumento);
}

int main() {
    int tipoTarjeta;
    double creditoActual;

    cout << "Introduce el tipo de tarjeta (1, 2, 3 o cualquier otro): ";
    cin >> tipoTarjeta;

    cout << "Introduce el cr�dito actual: ";
    cin >> creditoActual;

    // Validaci�n simple
    if (creditoActual < 0) {
        cout << "Error: El cr�dito no puede ser negativo." << endl;
        return 1;
    }

    double nuevoCredito = calcularCreditoAumentado(tipoTarjeta, creditoActual);

    cout << "El nuevo cr�dito aumentado es: $" << nuevoCredito << endl;

    return 0;
}


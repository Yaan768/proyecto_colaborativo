#include <iostream>
using namespace std;

double calcularCreditoAumentado(int tipoTarjeta, double creditoActual) {
    double porcentajeAumento;

    // Determinar el porcentaje de aumento según el tipo de tarjeta
    switch (tipoTarjeta) {
        case 1:
            porcentajeAumento = 0.25; // 25% de aumento
            break;
        case 2:
            porcentajeAumento = 0.35; // 35% de aumento
            break;
        case 3:
            porcentajeAumento = 0.40; // 40% de aumento
            break;
        default:
            porcentajeAumento = 0.50; // 50% de aumento para cualquier otro tipo
            break;
    }
	
porcentajeAumento = porcentajeAumento * creditoActual;
    double creditoAumentado = creditoActual + porcentajeAumento;
    return creditoAumentado;
}

int main() {
    int tipoTarjeta;
    double creditoActual;


    cout << "Introduce el tipo de tarjeta (1, 2, 3 o cualquier otro): ";
    cin >> tipoTarjeta;
    cout << "Introduce el credito actual: ";
    cin >> creditoActual;

    double nuevoCredito = calcularCreditoAumentado(tipoTarjeta, creditoActual);

    cout << "El nuevo credito aumentado es: " << nuevoCredito << endl;

    return 0;
}

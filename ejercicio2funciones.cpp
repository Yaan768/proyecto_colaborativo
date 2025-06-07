#include <iostream>//obtener vocal con numero ingresado
using namespace std;
//Proceso
char obtenerVocal(int numero)
{
    if (numero == 1) return 'a';
    if (numero == 2) return 'e';
    if (numero == 3) return 'i';
    if (numero == 4) return 'o';
    if (numero == 5) return 'u';
    return '?';// (Para cuando se ingrese otro valor numero)
}

int main()
{
    int opcion, n;
    char vocal; // (char para almacemar un solo caracter)

    do {
        cout << "\n === MENU ===" << endl;
        cout << "1. Ingresar un numero del 1 al 5 para obtener una vocal" << endl;
        cout << "2. Salir" << endl;
        cout << "Selecciona una opcion: ";
        cin >> opcion;
        if (opcion == 1) {
            cout << "Ingresa un numero del 1 al 5: ";
            cin >> n;

            if (n >=1 && n <= 5) {
                vocal = obtenerVocal(n);
                cout << "La vocal correspondiente es: " << vocal << endl;
            } else {
                cout << "Numero invalido. Debe ser del 1 al 5." << endl;
            }

    } else if (opcion == 2) {
            cout << "Saliendo del programa..." << endl;
        } else {
            cout << "Opcion invalida. Intente de nuevo." << endl;
        }
    } while (opcion != 2); 

    return 0; // Termina el programa si la opcion es invalida
}

#include <iostream>
using namespace std;

int main() {
    cout << "Calculo del perimetro y area de un pentagono regular" << endl;
    cout << "--------------------------------------------------" << endl;   
    float lado, apotema, perimetro, area;
    cout << "Ingrese la longitud del lado del pentagono: ";
    cin >> lado;
    cout << "Ingrese el apotema del pentagono: ";
    cin >> apotema;

    // Validación de entrada
    if (lado <= 0 || apotema <= 0) {
        cout << "Los valores deben ser mayores que cero." << endl;
        return 1; 
    }   

    // Cálculo del perímetro y área
    perimetro = 5 * lado;
    area = (apotema * perimetro) / 2;

    // Salida de resultados
    cout << "El perimetro del pentagono es: " << perimetro << endl;
    cout << "El area del pentagono es: " << area << endl;
    return 0;     
}

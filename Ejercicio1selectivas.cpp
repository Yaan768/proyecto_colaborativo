#include <iostream>
using namespace std;

int main() {
    float base, altura, perimetro;
    cout << "CALCULO DEL PERIMETRO DE UN RECTANGULO" << endl;
    cout << "--------------------------------------" << endl;
    
    cout << "Ingrese los valores de la base y la altura del rectangulo." << endl;
    cout << "----------------------------------------------------------" << endl;
   
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;

    if (base <= 0 || altura <= 0) {
        cout << "La base y la altura deben ser mayores que cero." << endl;
        return 1; 
    }

    perimetro = 2 * (base + altura);
    cout << "El perimetro del rectangulo es: " << perimetro << endl;
    return 0;
}

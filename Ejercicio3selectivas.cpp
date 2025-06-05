#include <iostream>
using namespace std;

int main() {
    float	 lado, apotema, perimetro, area;
    cout << "Ingrese la longitud del lado del pentagono: ";
    cin >> lado;
    cout << "Ingrese el apotema del pentagono: ";
    cin >> apotema;
    perimetro = 5 * lado;
    area = (apotema * perimetro) / 2;
    cout << "El perimetro del pentagono es: " << perimetro << endl;
    cout << "El area del pentagono es: " << area << endl;
    return 0;
}

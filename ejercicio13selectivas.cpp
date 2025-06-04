#include <iostream>//formar un triangulo
using namespace std;
int main() {
    float a, b, c;//a,b,c: longitudes a ingresar 
    cout << "Ingrese las tres longitudes: ";
    cin >> a >> b >> c;
    //Proceso
    if (a + b > c and a + c > b and b + c > a) {
        cout << "Se puede formar un triangulo." << endl;//Salida
    } 
	else {
        cout << "No se puede formar un triangulo." << endl;//salida
    }
}
